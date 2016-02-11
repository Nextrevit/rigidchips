#ifndef G_CONSTS
#define G_CONSTS
//�ő�`�b�v��
const int GCHIPMAX = 512;

//�ő�I�u�W�F�N�g��(e.g. ball)
const int GOBJMAX = 2;
//���₹��q�`�b�v�̍ő吔
const int GCHILDMAX = 12;

const float GDESTROY_K = 0.3f;

const int GTYPE_FACE = 0;
const int GTYPE_DISK = 1;
const int GTYPE_BOX = 2;
const int GTYPE_BALL = 3;
const int GTYPE_CAN = 4;
const int GTYPE_CONE = 5;
const int GTYPE_DUMMY = 6;

const int GMODELMAX = 38;
const int  GTEXMAX = 23;
const int GCHECKPOINTMAX = 100;

//�ő�Rec�t���[�����H
const int GRECMAX = 30 * 60 * 3;
const int GCOURSEMAX = 10;

//Val�̍ő吔
const int GVALMAX = 256;
//Key�̍ő吔�i�O�|�P�U�j
const int GKEYMAX = 17;
//SKEY�̍ő吔
const int GSYSKEYMAX = 4;
//?
const int GREFMAX = 1024;
//out�̍ő�s���H
const int GOUTPUTMAX = 25;
//������Ring�̍ő吔
const int GRINGMAX = 100;
//CCD�̉𑜓x
const int CCD_RESOLUTION = 64;

//�ő�p�[�e�B�N�����i�\���H���݁H�j
const int GPARTMAX = 10000;
//�~����
const double M_PI = 3.14159265358979323846;

//dt?
const int GDTSTEP = 10;
//�ʒu���Z�ӂ�̃��[�v���H
const int GLOOP = 10;

//�l�b�g���[�N�̑��M�Ԋu[ms]�B���ۂɂ̓R���Ƀ��b�Z�[�W���Ƃ̔䗦�������Ďg��
const int GNETSPAN = 200;
//Arm�̂��܂̑��x
const float ARMSPEED = 20.0f;

//�R������̕ϊ�����(�傫���قǌ������悢)
const double ARM_EFF = 1.0;
const double JET_EFF = 10.0;
const double WHL_EFF = 30.0;

typedef float GFloat;
const GFloat WATER_LINE = -0.45f;

const int MESSAGEMAX = 64;

const int GPLAYERMAX = 30;
const int MAX_PLAYER_NAME = 128;
#endif