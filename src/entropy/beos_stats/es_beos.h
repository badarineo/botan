/*************************************************
* BeOS EntropySource Header File                 *
* (C) 1999-2007 Jack Lloyd                       *
*************************************************/

#ifndef BOTAN_ENTROPY_SRC_BEOS_H__
#define BOTAN_ENTROPY_SRC_BEOS_H__

#include <botan/buf_es.h>

namespace Botan {

/*************************************************
* BeOS Entropy Source                            *
*************************************************/
class BOTAN_DLL BeOS_EntropySource : public Buffered_EntropySource
   {
   private:
      void do_fast_poll();
      void do_slow_poll();
   };

}

#endif
