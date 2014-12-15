#ifndef XMEANS_H
#define XMEANS_H

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>

typedef boost::numeric::ublas::matrix<double> doublematrix;
typedef boost::numeric::ublas::vector<double> doublevector;

doublematrix txInvVxX(const doublematrix &x, const doublematrix &invVx);

class ResultOflnL{
public:
	double lnL;
	doublevector detVx;
};

ResultOflnL lnL(const doublematrix &x, const doublevector &centers, bool ignoreCovariance );

#endif // XMEANS_H
