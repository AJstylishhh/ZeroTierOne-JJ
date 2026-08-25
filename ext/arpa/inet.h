#ifndef ZT_SWITCH_ARPA_INET_H
#define ZT_SWITCH_ARPA_INET_H

/*
 * The devkitA64/libnx SDK provides the BSD socket and Internet address
 * definitions through netinet/in.h, but does not ship arpa/inet.h.
 * ZeroTier's public API includes arpa/inet.h for Unix builds, so provide
 * the small compatibility wrapper needed by the Nintendo Switch build.
 */
#include <netinet/in.h>

#endif /* ZT_SWITCH_ARPA_INET_H */
