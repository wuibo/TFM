//
// Generated file, do not edit! Created by nedtool 4.6 from Inter_Layer.msg.
//

#ifndef _INTER_LAYER_M_H_
#define _INTER_LAYER_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>Inter_Layer.msg:6</tt> by nedtool.
 * <pre>
 * packet inter_layer
 * {
 *     int origen;		//direcci�n origen de la capa superior o inferior (superior en caso de descenso inferior en caso de ascenso)
 *     int destino;	//direcci�n destino de la capa inferior en todo memento
 * 
 * }
 * </pre>
 */
class inter_layer : public ::cPacket
{
  protected:
    int origen_var;
    int destino_var;

  private:
    void copy(const inter_layer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const inter_layer&);

  public:
    inter_layer(const char *name=NULL, int kind=0);
    inter_layer(const inter_layer& other);
    virtual ~inter_layer();
    inter_layer& operator=(const inter_layer& other);
    virtual inter_layer *dup() const {return new inter_layer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getOrigen() const;
    virtual void setOrigen(int origen);
    virtual int getDestino() const;
    virtual void setDestino(int destino);
};

inline void doPacking(cCommBuffer *b, inter_layer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, inter_layer& obj) {obj.parsimUnpack(b);}


#endif // ifndef _INTER_LAYER_M_H_

