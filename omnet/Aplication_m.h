//
// Generated file, do not edit! Created by nedtool 4.6 from Aplication.msg.
//

#ifndef _APLICATION_M_H_
#define _APLICATION_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>Aplication.msg:5</tt> by nedtool.
 * <pre>
 * //
 * // Represents a packet in the network. Aplication layer packet
 * //
 * packet Aplication
 * {
 *     unsigned int seq;
 *     unsigned int tam;
 *     double interTime;
 * }
 * </pre>
 */
class Aplication : public ::cPacket
{
  protected:
    unsigned int seq_var;
    unsigned int tam_var;
    double interTime_var;

  private:
    void copy(const Aplication& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Aplication&);

  public:
    Aplication(const char *name=NULL, int kind=0);
    Aplication(const Aplication& other);
    virtual ~Aplication();
    Aplication& operator=(const Aplication& other);
    virtual Aplication *dup() const {return new Aplication(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getSeq() const;
    virtual void setSeq(unsigned int seq);
    virtual unsigned int getTam() const;
    virtual void setTam(unsigned int tam);
    virtual double getInterTime() const;
    virtual void setInterTime(double interTime);
};

inline void doPacking(cCommBuffer *b, Aplication& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Aplication& obj) {obj.parsimUnpack(b);}


#endif // ifndef _APLICATION_M_H_

