.class public final Lcom/mbridge/msdk/mbbid/common/a/b;
.super Ljava/lang/Object;
.source "RequesManager.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Landroid/content/Context;

.field private e:Lcom/mbridge/msdk/mbbid/out/BidListennning;

.field private f:Lcom/mbridge/msdk/mbbid/common/BidResponsedEx;

.field private g:I

.field private h:Z

.field private i:J

.field private j:J

.field private k:Z

.field private l:I


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 84
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 40
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->h:Z

    .line 85
    iput-object p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->a:Ljava/lang/String;

    .line 86
    iput-object p2, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    .line 87
    iput-object p3, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->c:Ljava/lang/String;

    .line 88
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->d:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbid/common/a/b;)Landroid/content/Context;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->d:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbid/common/a/b;Lcom/mbridge/msdk/mbbid/common/BidResponsedEx;)Lcom/mbridge/msdk/mbbid/common/BidResponsedEx;
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->f:Lcom/mbridge/msdk/mbbid/common/BidResponsedEx;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbid/common/a/b;Lcom/mbridge/msdk/mbbid/out/BidResponsed;)V
    .locals 0

    .line 1260
    iget-object p0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->e:Lcom/mbridge/msdk/mbbid/out/BidListennning;

    if-eqz p0, :cond_0

    .line 1261
    invoke-interface {p0, p1}, Lcom/mbridge/msdk/mbbid/out/BidListennning;->onSuccessed(Lcom/mbridge/msdk/mbbid/out/BidResponsed;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbid/common/a/b;Ljava/lang/String;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbid/common/a/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    .line 254
    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->e:Lcom/mbridge/msdk/mbbid/out/BidListennning;

    if-eqz v0, :cond_0

    .line 255
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/mbbid/out/BidListennning;->onFailed(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbid/common/a/b;Z)Z
    .locals 0

    .line 32
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->h:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbbid/common/a/b;)Ljava/lang/String;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 55
    iput p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->l:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 67
    iput-wide p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->i:J

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/mbbid/out/BidListennning;)V
    .locals 0

    .line 184
    iput-object p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->e:Lcom/mbridge/msdk/mbbid/out/BidListennning;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->k:Z

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 59
    iput p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->g:I

    return-void
.end method

.method public final b(J)V
    .locals 0

    .line 75
    iput-wide p1, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->j:J

    return-void
.end method

.method public final b(Z)V
    .locals 14

    const-string v0, "orientation"

    const-string v1, ""

    .line 93
    :try_start_0
    iget-boolean v2, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->h:Z

    if-nez v2, :cond_b

    const/4 v2, 0x1

    .line 94
    iput-boolean v2, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->h:Z

    .line 99
    iget-object v3, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->d:Landroid/content/Context;

    if-nez v3, :cond_0

    const-string v3, "context is null"

    .line 100
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/mbbid/common/a/b;->a(Ljava/lang/String;)V

    .line 102
    :cond_0
    new-instance v3, Lcom/mbridge/msdk/mbbid/common/b/a;

    iget-object v4, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->d:Landroid/content/Context;

    invoke-direct {v3, v4}, Lcom/mbridge/msdk/mbbid/common/b/a;-><init>(Landroid/content/Context;)V

    .line 104
    new-instance v4, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    .line 105
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v5

    const-string v6, "app_id"

    .line 106
    invoke-virtual {v4, v6, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 107
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "sign"

    .line 108
    invoke-virtual {v4, v6, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "unit_id"

    .line 109
    iget-object v6, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    invoke-virtual {v4, v5, v6}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 110
    iget-object v5, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->a:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    const-string v5, "placement_id"

    .line 111
    iget-object v6, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->a:Ljava/lang/String;

    invoke-virtual {v4, v5, v6}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const-string v5, "bid_floor"

    .line 113
    iget-object v6, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->c:Ljava/lang/String;

    invoke-virtual {v4, v5, v6}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 114
    sget-object v5, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->d:Landroid/content/Context;

    iget-object v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    invoke-static {v6, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "install_ids"

    const/4 v6, 0x0

    .line 115
    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/ae;->a(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v5, v7}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    sget-object v5, Lcom/mbridge/msdk/foundation/same/net/g/d;->b:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    invoke-static {v7, v1}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v5, v7}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "req_type"

    .line 117
    iget-boolean v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->k:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v8, "1"

    if-eqz v7, :cond_2

    move-object v7, v8

    goto :goto_0

    :cond_2
    :try_start_1
    const-string v7, "2"

    :goto_0
    invoke-virtual {v4, v5, v7}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 118
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->d:Landroid/content/Context;

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/v;->t(Landroid/content/Context;)I

    move-result v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v0, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    iget v5, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->g:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/16 v7, 0x128

    const-string v9, "bid required param is missing or error"

    const-string v10, "x"

    const-string v11, "unit_size"

    const-wide/16 v12, 0x0

    if-ne v5, v7, :cond_4

    .line 120
    :try_start_2
    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->i:J

    cmp-long p1, v7, v12

    if-lez p1, :cond_3

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->j:J

    cmp-long p1, v7, v12

    if-lez p1, :cond_3

    .line 121
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->j:J

    invoke-virtual {p1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->i:J

    invoke-virtual {p1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, v11, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    const-string p1, "com.mbridge.msdk.mbbanner.common.util.BannerUtils"

    .line 127
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    const-string v0, "getCloseIds"

    new-array v5, v2, [Ljava/lang/Class;

    .line 128
    const-class v7, Ljava/lang/String;

    aput-object v7, v5, v6

    invoke-virtual {p1, v0, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    new-array v0, v2, [Ljava/lang/Object;

    .line 129
    iget-object v5, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    aput-object v5, v0, v6

    const/4 v5, 0x0

    invoke-virtual {p1, v5, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Ljava/lang/String;

    if-eqz v0, :cond_a

    const-string v0, "close_id"

    new-array v7, v2, [Ljava/lang/Object;

    .line 130
    iget-object v8, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    aput-object v8, v7, v6

    invoke-virtual {p1, v5, v7}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto/16 :goto_2

    :catch_0
    :try_start_4
    const-string p1, "banner module is miss"

    .line 133
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbid/common/a/b;->a(Ljava/lang/String;)V

    return-void

    .line 123
    :cond_3
    invoke-direct {p0, v9}, Lcom/mbridge/msdk/mbbid/common/a/b;->a(Ljava/lang/String;)V

    return-void

    .line 136
    :cond_4
    iget v5, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->g:I

    const/16 v7, 0x129

    if-ne v5, v7, :cond_6

    .line 137
    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->i:J

    cmp-long p1, v7, v12

    if-lez p1, :cond_5

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->j:J

    cmp-long p1, v7, v12

    if-lez p1, :cond_5

    .line 138
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->j:J

    invoke-virtual {p1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->i:J

    invoke-virtual {p1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, v11, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget v5, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->l:I

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_5
    const-string p1, "ad display area is too small"

    .line 140
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbid/common/a/b;->a(Ljava/lang/String;)V

    return-void

    .line 144
    :cond_6
    iget v0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->g:I

    const/16 v5, 0x12a

    if-ne v0, v5, :cond_8

    .line 145
    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->i:J

    cmp-long p1, v7, v12

    if-lez p1, :cond_7

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->j:J

    cmp-long p1, v7, v12

    if-lez p1, :cond_7

    .line 146
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->j:J

    invoke-virtual {p1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v7, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->i:J

    invoke-virtual {p1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, v11, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 148
    :cond_7
    invoke-direct {p0, v9}, Lcom/mbridge/msdk/mbbid/common/a/b;->a(Ljava/lang/String;)V

    return-void

    :cond_8
    const-string v0, "rw_plus"

    if-eqz p1, :cond_9

    goto :goto_1

    :cond_9
    const-string v8, "0"

    .line 152
    :goto_1
    invoke-virtual {v4, v0, v8}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 155
    :cond_a
    :goto_2
    new-instance p1, Lcom/mbridge/msdk/mbbid/common/a/b$1;

    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->a:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    invoke-direct {p1, p0, v0, v5}, Lcom/mbridge/msdk/mbbid/common/a/b$1;-><init>(Lcom/mbridge/msdk/mbbid/common/a/b;Ljava/lang/String;Ljava/lang/String;)V

    .line 171
    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbbid/common/a/a;->setUnitId(Ljava/lang/String;)V

    .line 172
    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/a/b;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbbid/common/a/a;->setPlacementId(Ljava/lang/String;)V

    .line 175
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v0

    invoke-virtual {v0, v6, v1}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a(ZLjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v2, v0, v4, p1}, Lcom/mbridge/msdk/mbbid/common/b/a;->get(ILjava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;)V

    goto :goto_3

    :cond_b
    const-string p1, "current unit is biding"

    .line 96
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbid/common/a/b;->a(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 177
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbid/common/a/b;->a(Ljava/lang/String;)V

    :goto_3
    return-void
.end method
