/* API para conexao socket no Windows
** Autor: Gabriel Montenegro Villacrez
** Instituto Transire
** v.1.0, ultima atualizacao 10/01/2018 */


#ifndef CONEXAOWIN_H
#define CONEXAOWIN_H

#ifdef __cplusplus
extern "C"{
#endif


#ifdef BUILDING_CONEXAOWIN
#define CONEXAOWIN __declspec(dllexport)
#else
#define CONEXAOWIN __declspec(dllimport)
#endif


int __cdecl CONEXAOWIN winSockConnect(char *serverIP, char* port, char *sendbuf, char *recvbuf); 

#ifdef __cplusplus
}
#endif
#endif //conexaoWin_DLL_h