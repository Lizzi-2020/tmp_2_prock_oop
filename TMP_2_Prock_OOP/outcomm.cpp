#include "transport.h"
void transport::OutCommon(ofstream &ofst) {
	ofst << ", Power Engine = " << powerEngine << std::endl;
}