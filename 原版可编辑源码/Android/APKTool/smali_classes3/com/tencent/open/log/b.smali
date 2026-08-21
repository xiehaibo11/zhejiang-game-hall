.class public Lcom/tencent/open/log/b;
.super Ljava/lang/Object;
.source "ProGuard"


# static fields
.field private static a:Ljava/text/SimpleDateFormat;


# instance fields
.field private b:Ljava/lang/String;

.field private c:I

.field private d:I

.field private e:I

.field private f:J

.field private g:Ljava/io/File;

.field private h:I

.field private i:Ljava/lang/String;

.field private j:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "yy.MM.dd.HH"

    .line 97
    invoke-static {v0}, Lcom/tencent/open/log/d$d;->a(Ljava/lang/String;)Ljava/text/SimpleDateFormat;

    move-result-object v0

    sput-object v0, Lcom/tencent/open/log/b;->a:Ljava/text/SimpleDateFormat;

    return-void
.end method

.method public constructor <init>(Ljava/io/File;IIILjava/lang/String;JILjava/lang/String;J)V
    .locals 2

    .line 161
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "Tracer.File"

    .line 111
    iput-object v0, p0, Lcom/tencent/open/log/b;->b:Ljava/lang/String;

    const v0, 0x7fffffff

    .line 112
    iput v0, p0, Lcom/tencent/open/log/b;->c:I

    .line 113
    iput v0, p0, Lcom/tencent/open/log/b;->d:I

    const/16 v0, 0x1000

    .line 114
    iput v0, p0, Lcom/tencent/open/log/b;->e:I

    const-wide/16 v0, 0x2710

    .line 115
    iput-wide v0, p0, Lcom/tencent/open/log/b;->f:J

    const/16 v0, 0xa

    .line 120
    iput v0, p0, Lcom/tencent/open/log/b;->h:I

    const-string v0, ".log"

    .line 121
    iput-object v0, p0, Lcom/tencent/open/log/b;->i:Ljava/lang/String;

    const-wide v0, 0x7fffffffffffffffL

    .line 122
    iput-wide v0, p0, Lcom/tencent/open/log/b;->j:J

    .line 162
    invoke-virtual {p0, p1}, Lcom/tencent/open/log/b;->a(Ljava/io/File;)V

    .line 163
    invoke-virtual {p0, p2}, Lcom/tencent/open/log/b;->b(I)V

    .line 164
    invoke-virtual {p0, p3}, Lcom/tencent/open/log/b;->a(I)V

    .line 165
    invoke-virtual {p0, p4}, Lcom/tencent/open/log/b;->c(I)V

    .line 166
    invoke-virtual {p0, p5}, Lcom/tencent/open/log/b;->a(Ljava/lang/String;)V

    .line 167
    invoke-virtual {p0, p6, p7}, Lcom/tencent/open/log/b;->b(J)V

    .line 168
    invoke-virtual {p0, p8}, Lcom/tencent/open/log/b;->d(I)V

    .line 169
    invoke-virtual {p0, p9}, Lcom/tencent/open/log/b;->b(Ljava/lang/String;)V

    .line 170
    invoke-virtual {p0, p10, p11}, Lcom/tencent/open/log/b;->c(J)V

    return-void
.end method

.method public static a(J)Ljava/lang/String;
    .locals 1

    .line 220
    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v0

    .line 221
    invoke-virtual {v0, p0, p1}, Ljava/util/Calendar;->setTimeInMillis(J)V

    .line 222
    new-instance p0, Ljava/text/SimpleDateFormat;

    const-string p1, "yy.MM.dd.HH"

    invoke-direct {p0, p1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 223
    invoke-virtual {v0}, Ljava/util/Calendar;->getTime()Ljava/util/Date;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private c(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 232
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "com.tencent.mobileqq_connectSdk."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".log"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private d(J)Ljava/io/File;
    .locals 2

    .line 193
    invoke-static {p1, p2}, Lcom/tencent/open/log/b;->a(J)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tencent/open/log/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 196
    invoke-static {}, Lcom/tencent/open/utils/m;->b()Ljava/lang/String;

    move-result-object p2

    .line 198
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    if-eqz p2, :cond_2

    .line 200
    :cond_0
    :try_start_0
    new-instance v0, Ljava/io/File;

    sget-object v1, Lcom/tencent/open/log/c;->o:Ljava/lang/String;

    invoke-direct {v0, p2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p2

    if-nez p2, :cond_1

    .line 203
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 205
    :cond_1
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, v0, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    const-string p2, "openSDK_LOG"

    const-string v0, "getWorkFile,get app specific file exception:"

    .line 208
    invoke-static {p2, v0, p1}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    const/4 p2, 0x0

    :goto_0
    return-object p2
.end method


# virtual methods
.method public a()Ljava/io/File;
    .locals 2

    .line 180
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-direct {p0, v0, v1}, Lcom/tencent/open/log/b;->d(J)Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public a(I)V
    .locals 0

    .line 293
    iput p1, p0, Lcom/tencent/open/log/b;->c:I

    return-void
.end method

.method public a(Ljava/io/File;)V
    .locals 0

    .line 372
    iput-object p1, p0, Lcom/tencent/open/log/b;->g:Ljava/io/File;

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    .line 272
    iput-object p1, p0, Lcom/tencent/open/log/b;->b:Ljava/lang/String;

    return-void
.end method

.method public b()Ljava/lang/String;
    .locals 1

    .line 261
    iget-object v0, p0, Lcom/tencent/open/log/b;->b:Ljava/lang/String;

    return-object v0
.end method

.method public b(I)V
    .locals 0

    .line 314
    iput p1, p0, Lcom/tencent/open/log/b;->d:I

    return-void
.end method

.method public b(J)V
    .locals 0

    .line 351
    iput-wide p1, p0, Lcom/tencent/open/log/b;->f:J

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 414
    iput-object p1, p0, Lcom/tencent/open/log/b;->i:Ljava/lang/String;

    return-void
.end method

.method public c()I
    .locals 1

    .line 319
    iget v0, p0, Lcom/tencent/open/log/b;->e:I

    return v0
.end method

.method public c(I)V
    .locals 0

    .line 330
    iput p1, p0, Lcom/tencent/open/log/b;->e:I

    return-void
.end method

.method public c(J)V
    .locals 0

    .line 434
    iput-wide p1, p0, Lcom/tencent/open/log/b;->j:J

    return-void
.end method

.method public d()I
    .locals 1

    .line 382
    iget v0, p0, Lcom/tencent/open/log/b;->h:I

    return v0
.end method

.method public d(I)V
    .locals 0

    .line 393
    iput p1, p0, Lcom/tencent/open/log/b;->h:I

    return-void
.end method
