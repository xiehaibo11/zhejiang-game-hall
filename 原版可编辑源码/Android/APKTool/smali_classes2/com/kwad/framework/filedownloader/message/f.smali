.class public Lcom/kwad/framework/filedownloader/message/f;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(BLcom/kwad/framework/filedownloader/d/c;Lcom/kwad/framework/filedownloader/download/d$a;)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;
    .locals 8

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    const/4 v0, 0x1

    const/4 v2, 0x0

    const/4 v3, -0x4

    if-eq p0, v3, :cond_10

    const/4 v3, -0x3

    if-eq p0, v3, :cond_e

    const/4 v3, -0x1

    if-eq p0, v3, :cond_c

    if-eq p0, v0, :cond_a

    const/4 v3, 0x2

    if-eq p0, v3, :cond_7

    const/4 v4, 0x3

    if-eq p0, v4, :cond_5

    const/4 v4, 0x5

    if-eq p0, v4, :cond_3

    const/4 v4, 0x6

    if-eq p0, v4, :cond_2

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p1, v4, v2

    invoke-static {p0}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v5

    aput-object v5, v4, v0

    const-string v5, "it can\'t takes a snapshot for the task(%s) when its status is %d,"

    invoke-static {v5, v4}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    const-class v6, Lcom/kwad/framework/filedownloader/message/f;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v2

    invoke-static {p0}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p0

    aput-object p0, v3, v0

    invoke-static {v6, v5, v3}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->getException()Ljava/lang/Exception;

    move-result-object p0

    if-eqz p0, :cond_0

    new-instance p0, Ljava/lang/IllegalStateException;

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->getException()Ljava/lang/Exception;

    move-result-object p2

    invoke-direct {p0, v4, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_0
    new-instance p0, Ljava/lang/IllegalStateException;

    invoke-direct {p0, v4}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    :goto_0
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->td()Z

    move-result p2

    if-eqz p2, :cond_1

    new-instance p2, Lcom/kwad/framework/filedownloader/message/d$d;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    invoke-direct {p2, v1, v2, v3, p0}, Lcom/kwad/framework/filedownloader/message/d$d;-><init>(IJLjava/lang/Throwable;)V

    goto/16 :goto_3

    :cond_1
    new-instance p2, Lcom/kwad/framework/filedownloader/message/h$d;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    long-to-int p1, v2

    invoke-direct {p2, v1, p1, p0}, Lcom/kwad/framework/filedownloader/message/h$d;-><init>(IILjava/lang/Throwable;)V

    goto/16 :goto_3

    :cond_2
    new-instance p2, Lcom/kwad/framework/filedownloader/message/MessageSnapshot$b;

    invoke-direct {p2, v1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot$b;-><init>(I)V

    goto/16 :goto_3

    :cond_3
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->td()Z

    move-result p0

    if-eqz p0, :cond_4

    new-instance p0, Lcom/kwad/framework/filedownloader/message/d$h;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->getException()Ljava/lang/Exception;

    move-result-object v4

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->tb()I

    move-result v5

    move-object v0, p0

    invoke-direct/range {v0 .. v5}, Lcom/kwad/framework/filedownloader/message/d$h;-><init>(IJLjava/lang/Throwable;I)V

    goto/16 :goto_2

    :cond_4
    new-instance p0, Lcom/kwad/framework/filedownloader/message/h$h;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    long-to-int p1, v2

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->getException()Ljava/lang/Exception;

    move-result-object v0

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->tb()I

    move-result p2

    invoke-direct {p0, v1, p1, v0, p2}, Lcom/kwad/framework/filedownloader/message/h$h;-><init>(IILjava/lang/Throwable;I)V

    goto/16 :goto_2

    :cond_5
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->td()Z

    move-result p0

    if-eqz p0, :cond_6

    new-instance p2, Lcom/kwad/framework/filedownloader/message/d$g;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide p0

    invoke-direct {p2, v1, p0, p1}, Lcom/kwad/framework/filedownloader/message/d$g;-><init>(IJ)V

    goto/16 :goto_3

    :cond_6
    new-instance p2, Lcom/kwad/framework/filedownloader/message/h$g;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide p0

    long-to-int p0, p0

    invoke-direct {p2, v1, p0}, Lcom/kwad/framework/filedownloader/message/h$g;-><init>(II)V

    goto/16 :goto_3

    :cond_7
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->sT()Z

    move-result p0

    if-eqz p0, :cond_8

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getFilename()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :cond_8
    const/4 p0, 0x0

    :goto_1
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->td()Z

    move-result v0

    if-eqz v0, :cond_9

    new-instance v7, Lcom/kwad/framework/filedownloader/message/d$c;

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->uR()Z

    move-result v2

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v3

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vn()Ljava/lang/String;

    move-result-object v5

    move-object v0, v7

    move-object v6, p0

    invoke-direct/range {v0 .. v6}, Lcom/kwad/framework/filedownloader/message/d$c;-><init>(IZJLjava/lang/String;Ljava/lang/String;)V

    move-object p2, v7

    goto/16 :goto_3

    :cond_9
    new-instance v6, Lcom/kwad/framework/filedownloader/message/h$c;

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->uR()Z

    move-result v2

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v3

    long-to-int v3, v3

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vn()Ljava/lang/String;

    move-result-object v4

    move-object v0, v6

    move-object v5, p0

    invoke-direct/range {v0 .. v5}, Lcom/kwad/framework/filedownloader/message/h$c;-><init>(IZILjava/lang/String;Ljava/lang/String;)V

    move-object p2, v6

    goto :goto_3

    :cond_a
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->td()Z

    move-result p0

    if-eqz p0, :cond_b

    new-instance p2, Lcom/kwad/framework/filedownloader/message/d$f;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v4

    move-object v0, p2

    invoke-direct/range {v0 .. v5}, Lcom/kwad/framework/filedownloader/message/d$f;-><init>(IJJ)V

    goto :goto_3

    :cond_b
    new-instance p2, Lcom/kwad/framework/filedownloader/message/h$f;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    long-to-int p0, v2

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v2

    long-to-int p1, v2

    invoke-direct {p2, v1, p0, p1}, Lcom/kwad/framework/filedownloader/message/h$f;-><init>(III)V

    goto :goto_3

    :cond_c
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->td()Z

    move-result p0

    if-eqz p0, :cond_d

    new-instance p0, Lcom/kwad/framework/filedownloader/message/d$d;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->getException()Ljava/lang/Exception;

    move-result-object p1

    invoke-direct {p0, v1, v2, v3, p1}, Lcom/kwad/framework/filedownloader/message/d$d;-><init>(IJLjava/lang/Throwable;)V

    goto :goto_2

    :cond_d
    new-instance p0, Lcom/kwad/framework/filedownloader/message/h$d;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    long-to-int p1, v2

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/d$a;->getException()Ljava/lang/Exception;

    move-result-object p2

    invoke-direct {p0, v1, p1, p2}, Lcom/kwad/framework/filedownloader/message/h$d;-><init>(IILjava/lang/Throwable;)V

    :goto_2
    move-object p2, p0

    goto :goto_3

    :cond_e
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->td()Z

    move-result p0

    if-eqz p0, :cond_f

    new-instance p2, Lcom/kwad/framework/filedownloader/message/d$b;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide p0

    invoke-direct {p2, v1, v2, p0, p1}, Lcom/kwad/framework/filedownloader/message/d$b;-><init>(IZJ)V

    goto :goto_3

    :cond_f
    new-instance p2, Lcom/kwad/framework/filedownloader/message/h$b;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide p0

    long-to-int p0, p0

    invoke-direct {p2, v1, v2, p0}, Lcom/kwad/framework/filedownloader/message/h$b;-><init>(IZI)V

    :goto_3
    return-object p2

    :cond_10
    new-instance p0, Ljava/lang/IllegalStateException;

    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v2

    const-string p2, "please use #catchWarn instead %d"

    invoke-static {p2, p1}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static a(IJJZ)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;
    .locals 7

    const-wide/32 v0, 0x7fffffff

    cmp-long v0, p3, v0

    if-lez v0, :cond_1

    if-eqz p5, :cond_0

    new-instance p5, Lcom/kwad/framework/filedownloader/message/d$i;

    move-object v1, p5

    move v2, p0

    move-wide v3, p1

    move-wide v5, p3

    invoke-direct/range {v1 .. v6}, Lcom/kwad/framework/filedownloader/message/d$i;-><init>(IJJ)V

    return-object p5

    :cond_0
    new-instance p5, Lcom/kwad/framework/filedownloader/message/d$j;

    move-object v0, p5

    move v1, p0

    move-wide v2, p1

    move-wide v4, p3

    invoke-direct/range {v0 .. v5}, Lcom/kwad/framework/filedownloader/message/d$j;-><init>(IJJ)V

    return-object p5

    :cond_1
    if-eqz p5, :cond_2

    new-instance p5, Lcom/kwad/framework/filedownloader/message/h$i;

    long-to-int p1, p1

    long-to-int p2, p3

    invoke-direct {p5, p0, p1, p2}, Lcom/kwad/framework/filedownloader/message/h$i;-><init>(III)V

    return-object p5

    :cond_2
    new-instance p5, Lcom/kwad/framework/filedownloader/message/h$j;

    long-to-int p1, p1

    long-to-int p2, p3

    invoke-direct {p5, p0, p1, p2}, Lcom/kwad/framework/filedownloader/message/h$j;-><init>(III)V

    return-object p5
.end method

.method public static a(IJLjava/lang/Throwable;)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;
    .locals 2

    const-wide/32 v0, 0x7fffffff

    cmp-long v0, p1, v0

    if-lez v0, :cond_0

    new-instance v0, Lcom/kwad/framework/filedownloader/message/d$d;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/kwad/framework/filedownloader/message/d$d;-><init>(IJLjava/lang/Throwable;)V

    return-object v0

    :cond_0
    new-instance v0, Lcom/kwad/framework/filedownloader/message/h$d;

    long-to-int p1, p1

    invoke-direct {v0, p0, p1, p3}, Lcom/kwad/framework/filedownloader/message/h$d;-><init>(IILjava/lang/Throwable;)V

    return-object v0
.end method

.method public static a(ILjava/io/File;Z)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;
    .locals 4

    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide v0

    const-wide/32 v2, 0x7fffffff

    cmp-long p1, v0, v2

    const/4 v2, 0x1

    if-lez p1, :cond_1

    if-eqz p2, :cond_0

    new-instance p1, Lcom/kwad/framework/filedownloader/message/d$a;

    invoke-direct {p1, p0, v2, v0, v1}, Lcom/kwad/framework/filedownloader/message/d$a;-><init>(IZJ)V

    return-object p1

    :cond_0
    new-instance p1, Lcom/kwad/framework/filedownloader/message/d$b;

    invoke-direct {p1, p0, v2, v0, v1}, Lcom/kwad/framework/filedownloader/message/d$b;-><init>(IZJ)V

    return-object p1

    :cond_1
    if-eqz p2, :cond_2

    new-instance p1, Lcom/kwad/framework/filedownloader/message/h$a;

    long-to-int p2, v0

    invoke-direct {p1, p0, v2, p2}, Lcom/kwad/framework/filedownloader/message/h$a;-><init>(IZI)V

    return-object p1

    :cond_2
    new-instance p1, Lcom/kwad/framework/filedownloader/message/h$b;

    long-to-int p2, v0

    invoke-direct {p1, p0, v2, p2}, Lcom/kwad/framework/filedownloader/message/h$b;-><init>(IZI)V

    return-object p1
.end method

.method public static e(Lcom/kwad/framework/filedownloader/a;)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;
    .locals 7

    invoke-interface {p0}, Lcom/kwad/framework/filedownloader/a;->td()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/framework/filedownloader/message/d$e;

    invoke-interface {p0}, Lcom/kwad/framework/filedownloader/a;->getId()I

    move-result v2

    invoke-interface {p0}, Lcom/kwad/framework/filedownloader/a;->sV()J

    move-result-wide v3

    invoke-interface {p0}, Lcom/kwad/framework/filedownloader/a;->sW()J

    move-result-wide v5

    move-object v1, v0

    invoke-direct/range {v1 .. v6}, Lcom/kwad/framework/filedownloader/message/d$e;-><init>(IJJ)V

    return-object v0

    :cond_0
    new-instance v0, Lcom/kwad/framework/filedownloader/message/h$e;

    invoke-interface {p0}, Lcom/kwad/framework/filedownloader/a;->getId()I

    move-result v1

    invoke-interface {p0}, Lcom/kwad/framework/filedownloader/a;->getSmallFileSoFarBytes()I

    move-result v2

    invoke-interface {p0}, Lcom/kwad/framework/filedownloader/a;->getSmallFileTotalBytes()I

    move-result p0

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/framework/filedownloader/message/h$e;-><init>(III)V

    return-object v0
.end method

.method public static t(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result v0

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    new-instance v0, Lcom/kwad/framework/filedownloader/message/a$a;

    invoke-direct {v0, p0}, Lcom/kwad/framework/filedownloader/message/a$a;-><init>(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->getId()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result p0

    invoke-static {p0}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p0

    aput-object p0, v1, v2

    const-string p0, "take block completed snapshot, must has already be completed. %d %d"

    invoke-static {p0, v1}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method
