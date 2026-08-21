.class public final Lcom/loc/fs;
.super Ljava/lang/Object;
.source "DateUtil.java"


# direct methods
.method private static a(J)J
    .locals 2

    invoke-static {p0, p1}, Lcom/loc/fs;->b(J)J

    move-result-wide v0

    sub-long/2addr p0, v0

    return-wide p0
.end method

.method private static a(JJ)J
    .locals 6

    invoke-static {p0, p1}, Lcom/loc/fs;->a(J)J

    move-result-wide p0

    invoke-static {p2, p3}, Lcom/loc/fs;->b(J)J

    move-result-wide v0

    add-long/2addr v0, p0

    sub-long p0, v0, p2

    invoke-static {p0, p1}, Ljava/lang/Math;->abs(J)J

    move-result-wide p0

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object p2

    new-instance p3, Ljava/util/Date;

    invoke-direct {p3, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {p2, p3}, Ljava/util/Calendar;->setTime(Ljava/util/Date;)V

    const/16 p3, 0xb

    invoke-virtual {p2, p3}, Ljava/util/Calendar;->get(I)I

    move-result p2

    const-wide/32 v2, 0x5265c00

    const-wide/32 v4, 0x4ef6d80

    const/16 p3, 0x17

    if-ne p2, p3, :cond_0

    cmp-long p3, p0, v4

    if-ltz p3, :cond_0

    sub-long/2addr v0, v2

    :cond_0
    if-nez p2, :cond_1

    cmp-long p2, p0, v4

    if-ltz p2, :cond_1

    add-long/2addr v0, v2

    :cond_1
    return-wide v0
.end method

.method public static a(JJI)J
    .locals 6

    if-lez p4, :cond_0

    sub-long v0, p0, p2

    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Math;->abs(J)J

    move-result-wide v0

    int-to-long v2, p4

    const-wide v4, 0x757b12c00L

    mul-long v2, v2, v4

    cmp-long p4, v0, v2

    if-lez p4, :cond_0

    invoke-static {p0, p1, p2, p3}, Lcom/loc/fs;->a(JJ)J

    move-result-wide p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-wide p0
.end method

.method private static b(J)J
    .locals 2

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v0

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1, p0, p1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v0, v1}, Ljava/util/Calendar;->setTime(Ljava/util/Date;)V

    const/4 p0, 0x0

    const/16 p1, 0xb

    invoke-virtual {v0, p1, p0}, Ljava/util/Calendar;->set(II)V

    const/16 p1, 0xc

    invoke-virtual {v0, p1, p0}, Ljava/util/Calendar;->set(II)V

    const/16 p1, 0xd

    invoke-virtual {v0, p1, p0}, Ljava/util/Calendar;->set(II)V

    const/16 p1, 0xe

    invoke-virtual {v0, p1, p0}, Ljava/util/Calendar;->set(II)V

    invoke-virtual {v0}, Ljava/util/Calendar;->getTimeInMillis()J

    move-result-wide p0

    return-wide p0
.end method
