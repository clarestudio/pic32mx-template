# /* $Id: release.mk,v 1.4 2025/06/28 20:25:05 clare Exp $ */

DATE!=date +%Y%m%d

tar:
	$(MAKE) clean
	tar zcvf ../$(PROG)-$(DATE).tar.gz \
		--exclude=CVS --exclude=.svn --exclude=.git \
		.
