#ifndef G_GLOBALS
#define G_GLOBALS
#include <Windows.h>
#include "Consts.hpp"
#include "luaSystem.hpp"
#include "luaSub.hpp"
#include "readData.hpp"
#include "GPlayers.h"
#include "GDPlay.hpp"
#include "GParticle.hpp"
#include "Rigidmain.h"
//Global.cpp�ł������Ԓ�`�A���ł�extern�̊O���Q�ƈ���
#ifdef _GLOBAL_BODY
#define EXTERN 
#else
#define EXTERN extern
#endif

//��������O���[�o���ϐ���`
EXTERN LPDIRECT3DDEVICE8 g_D3DDevice;
EXTERN GValList g_ValList[GVALMAX];
EXTERN GKeyList g_KeyList[GKEYMAX];
EXTERN GWorld *g_World;
EXTERN GRigid *g_Chip[GCHIPMAX];
EXTERN CMyD3DApplication* g_pApp;
EXTERN CD3DMesh* g_pLandMesh;	// XMesh�f�[�^
EXTERN HWND g_hWnd;              // The main app window
//�l�b�g���[�N�֌W
EXTERN GDPlay *g_DPlay;
EXTERN GPLAYERDATA g_PlayerData[GPLAYERMAX];
EXTERN GMYDATA g_MyPlayerData;
//��M�������b�Z�[�W�H
EXTERN char g_MessageData[MESSAGEMAX + 1];
EXTERN int g_RecieaveMessageCode[GPLAYERMAX];
EXTERN char g_RecieaveMessageData[GPLAYERMAX][MESSAGEMAX + 1];
//�p�[�e�B�N���`��֌W
EXTERN GParticle *g_GroundParticle;
EXTERN GParticle *g_WaterLineParticle;
EXTERN GParticle *g_JetParticle;
EXTERN GBullet *g_Bullet;
//���f���ǂݍ��݂���̃t���[����
EXTERN int g_TickCount;
//�N������̃t���[����
EXTERN int g_SystemTickCount;
//���݂̃��f����Var��
EXTERN int g_VarCount;
//���݂�FPS
EXTERN double g_FPS;
//�������������ʒu���킩��Ȃ��̂ŋ��]�̍�
#ifdef _GLOBAL_BODY
EXTERN int g_LimitFPS = 30;
EXTERN GFloat TotalPower = 0;
#else
//����FPS
EXTERN int g_LimitFPS;//=30
EXTERN GFloat TotalPower;
#endif

//EXTERN bool ObjectBallFlag;
//Script�֌W�i����܂���t�������Ȃ��j
EXTERN char *ScriptSource;
EXTERN int ScriptType;
EXTERN char ScriptOutput[GOUTPUTMAX][512];
EXTERN int ScriptErrorCode;
EXTERN int ScriptErrorPc;
EXTERN char ScriptErrorStr[];

//Lua�֌W
//���f���̕���Lua
EXTERN lua_State *g_ScriptLua;
//�V�i���ILua
EXTERN lua_State *g_SystemLua;
//�����R�cLINE�̕`��ʒu
EXTERN float luaL3dx, luaL3dy, luaL3dz;
//���݂�Lua�ň����F�̐F
EXTERN int luaGraColor;
EXTERN char *SystemSource;
EXTERN char SystemOutput[GOUTPUTMAX][512];
EXTERN int SystemErrorCode;
EXTERN char SystemErrorStr[512];
//�l�b�g���[�N�m�C�Y�̓��A�����̃T�C���J�[�u�̕�
EXTERN int g_RandTime;
//�V�X�e�����֘A�B�O���[�o���ł���K�v����̂��H

EXTERN int CCDImage[CCD_RESOLUTION][CCD_RESOLUTION];
EXTERN int LastBye;
EXTERN int Analog[6];
EXTERN int Hat[1];
EXTERN int	MouseX;
EXTERN int	MouseY;
EXTERN int	MouseL;
EXTERN int	MouseR;
EXTERN int	MouseM;
EXTERN int	CtrlKey;
EXTERN float CCDZoom; //float CCDZoom = 0.3f*180.0f / (GFloat)M_PI;
EXTERN char ScriptOutput[][512];
//extern bool ObjectBallFlag;
EXTERN char ScriptErrorStr[];
EXTERN int ViewType;
EXTERN GVector UserEyePos;
EXTERN GVector UserRefPos;
EXTERN GVector UserUpVec;
EXTERN GFloat Zoom;
EXTERN GVector AirSpeed;//��

//���M�����[�V�����̐ݒ�
#ifdef _GLOBAL_BODY
EXTERN bool GravityFlag = TRUE;
EXTERN bool AirFlag = TRUE;
EXTERN bool TorqueFlag = TRUE;
EXTERN bool JetFlag = TRUE;
EXTERN bool UnbreakableFlag = TRUE;
EXTERN bool ScriptFlag = TRUE;
EXTERN bool CCDFlag = TRUE;
EXTERN bool EfficientFlag = TRUE;
#else
EXTERN bool GravityFlag;
EXTERN bool AirFlag;
EXTERN bool TorqueFlag;
EXTERN bool JetFlag;
EXTERN bool UnbreakableFlag;
EXTERN bool ScriptFlag;
EXTERN bool CCDFlag;
EXTERN bool EfficientFlag;
#endif
EXTERN DWORD UseLuaExternal;
EXTERN bool ControlKeysLock[8];//0:Init,1:Reset,2:Open,3:Update,4:OpenLand,5:OpenGame,6:YForce,7:Title

EXTERN int ViewUpdate;//=0

#ifdef _GLOBAL_BODY
EXTERN char szUpdateFileName[_MAX_PATH] = "";
EXTERN char szUpdateFileName0[_MAX_PATH] = "";
EXTERN char szLandFileName[_MAX_PATH] = "";
EXTERN char szLandFileName0[_MAX_PATH] = "";
EXTERN char szTempFileName0[_MAX_PATH] = "";
EXTERN char szSystemFileName[_MAX_PATH] = "";
EXTERN char szSystemFileName0[_MAX_PATH] = "";
#else
EXTERN char szUpdateFileName[_MAX_PATH];
EXTERN char szUpdateFileName0[_MAX_PATH];
EXTERN char szLandFileName[_MAX_PATH];
EXTERN char szLandFileName0[_MAX_PATH];
EXTERN char szTempFileName0[_MAX_PATH];
EXTERN char szSystemFileName[_MAX_PATH];
EXTERN char szSystemFileName0[_MAX_PATH];
#endif

EXTERN bool SystemKeys[GSYSKEYMAX];
EXTERN bool SystemKeysDown[GSYSKEYMAX];
EXTERN bool SystemKeysUp[GSYSKEYMAX];
//�e��t�H���_�̃p�X�B���̓O���[�o���Ɏg���Ă�̂�CurrDataDir�����ۂ�
EXTERN TCHAR AppDir[MAX_PATH];
EXTERN TCHAR ResourceDir[MAX_PATH];
EXTERN TCHAR DataDir[MAX_PATH];
EXTERN TCHAR CurrDataDir[MAX_PATH];
EXTERN TCHAR CurrScenarioDir[MAX_PATH];

EXTERN int scenarioCode;//=0
//���f���ǂݍ��ݎ��̃G���[�t���O�ۂ��H
EXTERN int DataCheck;// = 0;

EXTERN GVector CompassTarget;
EXTERN GRing Ring[];
EXTERN char LastChatData[];
#endif