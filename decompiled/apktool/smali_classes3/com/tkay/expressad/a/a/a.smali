.class public final Lcom/tkay/expressad/a/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/a/a/a$b;,
        Lcom/tkay/expressad/a/a/a$a;
    }
.end annotation


# static fields
.field public static a:Ljava/lang/String; = "mtg_retry_report=1"

.field public static b:I = 0x2710

.field public static final c:I = 0x1

.field public static final d:I = 0x2

.field public static e:I = 0x3

.field public static f:I = 0x32

.field public static g:I = 0x927c0

.field public static h:I = 0x0

.field public static i:I = 0x1

.field public static j:I = 0x2

.field public static k:I = 0x3

.field public static l:I = 0x4

.field public static m:I = 0x5

.field private static n:Ljava/lang/String; = "RetryReportControl"

.field private static q:I

.field private static r:I


# instance fields
.field private o:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/a/a/b;",
            ">;"
        }
    .end annotation
.end field

.field private p:Lcom/tkay/expressad/a/a/c;

.field private s:Landroid/content/BroadcastReceiver;

.field private final t:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 3

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/a/a/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    .line 34
    new-instance v0, Lcom/tkay/expressad/a/a/c;

    sget v1, Lcom/tkay/expressad/a/a/a;->f:I

    invoke-direct {v0, v1}, Lcom/tkay/expressad/a/a/c;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    .line 85
    new-instance v0, Lcom/tkay/expressad/a/a/a$b;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/a/a/a$b;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/a/a;->t:Landroid/os/Handler;

    .line 48
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    .line 49
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->U()I

    move-result v1

    sput v1, Lcom/tkay/expressad/a/a/a;->e:I

    .line 50
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->W()I

    move-result v1

    mul-int/lit16 v1, v1, 0x3e8

    sput v1, Lcom/tkay/expressad/a/a/a;->b:I

    .line 51
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->V()I

    move-result v1

    mul-int/lit16 v1, v1, 0x3e8

    sput v1, Lcom/tkay/expressad/a/a/a;->g:I

    .line 52
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->T()I

    move-result v1

    sput v1, Lcom/tkay/expressad/a/a/a;->q:I

    .line 53
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->S()I

    move-result v0

    sput v0, Lcom/tkay/expressad/a/a/a;->r:I

    .line 1283
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->s:Landroid/content/BroadcastReceiver;

    if-nez v0, :cond_0

    .line 1284
    new-instance v0, Lcom/tkay/expressad/a/a/a$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/a/a/a$1;-><init>(Lcom/tkay/expressad/a/a/a;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/a/a;->s:Landroid/content/BroadcastReceiver;

    .line 1293
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1295
    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.net.conn.CONNECTIVITY_CHANGE"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 1296
    iget-object v2, p0, Lcom/tkay/expressad/a/a/a;->s:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 1300
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 30
    invoke-direct {p0}, Lcom/tkay/expressad/a/a/a;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/a/a/a;
    .locals 1

    .line 61
    invoke-static {}, Lcom/tkay/expressad/a/a/a$a;->a()Lcom/tkay/expressad/a/a/a;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/a/a/a;)V
    .locals 3

    .line 2240
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    if-eqz v0, :cond_0

    .line 2241
    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/c;->a()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 2242
    sget v2, Lcom/tkay/expressad/a/a/b;->b:I

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/a/a/a;->a(Ljava/lang/String;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/a/a/a;Ljava/lang/String;I)V
    .locals 0

    .line 30
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/a/a/a;->a(Ljava/lang/String;I)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 3

    .line 233
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->t:Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    const/4 v1, 0x1

    .line 234
    iput v1, v0, Landroid/os/Message;->what:I

    .line 235
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 236
    iget-object p1, p0, Lcom/tkay/expressad/a/a/a;->t:Landroid/os/Handler;

    sget v1, Lcom/tkay/expressad/a/a/a;->b:I

    int-to-long v1, v1

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void
.end method

.method private a(Ljava/lang/String;I)V
    .locals 8

    .line 249
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    if-eqz v0, :cond_3

    .line 250
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/a/a/c;->a(Ljava/lang/String;)Lcom/tkay/expressad/a/a/b;

    move-result-object v0

    .line 251
    iget-object v1, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/a/a/c;->b(Ljava/lang/String;)V

    if-eqz v0, :cond_2

    .line 253
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/b;->h()J

    move-result-wide v3

    sget v5, Lcom/tkay/expressad/a/a/a;->g:I

    int-to-long v5, v5

    add-long/2addr v3, v5

    cmp-long v1, v1, v3

    if-gtz v1, :cond_1

    .line 254
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/a/a/b;->a(I)V

    .line 255
    iget-object p2, p0, Lcom/tkay/expressad/a/a/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 256
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/x;->b(Ljava/lang/String;)I

    move-result p2

    if-nez p2, :cond_0

    .line 257
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "?"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Lcom/tkay/expressad/a/a/a;->a:Ljava/lang/String;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 259
    :cond_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "&"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Lcom/tkay/expressad/a/a/a;->a:Ljava/lang/String;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :goto_0
    move-object v4, p1

    .line 262
    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/b;->f()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    .line 263
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/b;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/b;->a()Z

    move-result v5

    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/b;->b()Z

    move-result v6

    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/b;->d()I

    move-result v7

    invoke-static/range {v1 .. v7}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    return-void

    .line 264
    :cond_1
    sget p1, Lcom/tkay/expressad/a/a/b;->b:I

    if-eq p2, p1, :cond_3

    return-void

    .line 269
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/a/a/b;

    if-eqz v0, :cond_3

    .line 271
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/b;->h()J

    move-result-wide v3

    sget v5, Lcom/tkay/expressad/a/a/a;->g:I

    int-to-long v5, v5

    add-long/2addr v3, v5

    cmp-long v1, v1, v3

    if-gtz v1, :cond_3

    .line 272
    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/b;->g()I

    move-result v0

    sget v1, Lcom/tkay/expressad/a/a/a;->e:I

    if-ge v0, v1, :cond_3

    sget v0, Lcom/tkay/expressad/a/a/b;->b:I

    if-eq p2, v0, :cond_3

    .line 274
    invoke-direct {p0, p1}, Lcom/tkay/expressad/a/a/a;->a(Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/a/a/b;)V
    .locals 2

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    if-nez v0, :cond_0

    .line 227
    new-instance v0, Lcom/tkay/expressad/a/a/c;

    sget v1, Lcom/tkay/expressad/a/a/a;->f:I

    invoke-direct {v0, v1}, Lcom/tkay/expressad/a/a/c;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    .line 229
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/a/a/c;->a(Ljava/lang/String;Lcom/tkay/expressad/a/a/b;)Z

    return-void
.end method

.method private static a(I)Z
    .locals 1

    .line 321
    sget v0, Lcom/tkay/expressad/a/a/a;->l:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/a/a/a;->k:I

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/a/a/a;)Landroid/os/Handler;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/expressad/a/a/a;->t:Landroid/os/Handler;

    return-object p0
.end method

.method private b()V
    .locals 3

    .line 240
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    if-eqz v0, :cond_0

    .line 241
    invoke-virtual {v0}, Lcom/tkay/expressad/a/a/c;->a()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 242
    sget v2, Lcom/tkay/expressad/a/a/b;->b:I

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/a/a/a;->a(Ljava/lang/String;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private static b(I)Z
    .locals 1

    .line 325
    sget v0, Lcom/tkay/expressad/a/a/a;->i:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/a/a/a;->j:I

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private c()V
    .locals 3

    .line 283
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->s:Landroid/content/BroadcastReceiver;

    if-nez v0, :cond_0

    .line 284
    new-instance v0, Lcom/tkay/expressad/a/a/a$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/a/a/a$1;-><init>(Lcom/tkay/expressad/a/a/a;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/a/a;->s:Landroid/content/BroadcastReceiver;

    .line 293
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 295
    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.net.conn.CONNECTIVITY_CHANGE"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 296
    iget-object v2, p0, Lcom/tkay/expressad/a/a/a;->s:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 300
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private static c(I)Z
    .locals 1

    .line 329
    invoke-static {p0}, Lcom/tkay/expressad/a/a/a;->a(I)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Lcom/tkay/expressad/a/a/a;->b(I)Z

    move-result v0

    if-nez v0, :cond_1

    sget v0, Lcom/tkay/expressad/a/a/a;->m:I

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private d()V
    .locals 2

    .line 305
    iget-object v0, p0, Lcom/tkay/expressad/a/a/a;->s:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    .line 306
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 308
    iget-object v1, p0, Lcom/tkay/expressad/a/a/a;->s:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;ZZI)V
    .locals 6

    .line 1329
    invoke-static {p7}, Lcom/tkay/expressad/a/a/a;->a(I)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez v0, :cond_1

    invoke-static {p7}, Lcom/tkay/expressad/a/a/a;->b(I)Z

    move-result v0

    if-nez v0, :cond_1

    sget v0, Lcom/tkay/expressad/a/a/a;->m:I

    if-ne p7, v0, :cond_0

    goto :goto_0

    :cond_0
    move v0, v1

    goto :goto_1

    :cond_1
    :goto_0
    move v0, v2

    :goto_1
    if-eqz v0, :cond_c

    .line 88
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto/16 :goto_3

    .line 92
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "?"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v3, Lcom/tkay/expressad/a/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, ""

    invoke-virtual {p1, v0, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 93
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "&"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v5, Lcom/tkay/expressad/a/a/a;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 95
    iget-object v3, p0, Lcom/tkay/expressad/a/a/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v3, :cond_3

    .line 96
    new-instance v3, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v3}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v3, p0, Lcom/tkay/expressad/a/a/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    .line 98
    :cond_3
    iget-object v3, p0, Lcom/tkay/expressad/a/a/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, v0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/a/a/b;

    if-nez v3, :cond_4

    .line 100
    new-instance v3, Lcom/tkay/expressad/a/a/b;

    invoke-direct {v3, p1, p2}, Lcom/tkay/expressad/a/a/b;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    invoke-virtual {v3, p7}, Lcom/tkay/expressad/a/a/b;->b(I)V

    .line 102
    invoke-virtual {v3, p5}, Lcom/tkay/expressad/a/a/b;->a(Z)V

    .line 103
    invoke-virtual {v3, p6}, Lcom/tkay/expressad/a/a/b;->b(Z)V

    .line 104
    invoke-virtual {v3, p3}, Lcom/tkay/expressad/a/a/b;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 105
    invoke-virtual {v3, p4}, Lcom/tkay/expressad/a/a/b;->a(Ljava/lang/String;)V

    goto :goto_2

    .line 107
    :cond_4
    invoke-virtual {v3}, Lcom/tkay/expressad/a/a/b;->c()I

    move-result p1

    sget p3, Lcom/tkay/expressad/a/a/b;->b:I

    if-eq p1, p3, :cond_5

    .line 108
    invoke-virtual {v3, p2}, Lcom/tkay/expressad/a/a/b;->b(Ljava/lang/String;)V

    .line 112
    :cond_5
    :goto_2
    invoke-static {p7}, Lcom/tkay/expressad/a/a/a;->a(I)Z

    move-result p1

    if-eqz p1, :cond_6

    sget p1, Lcom/tkay/expressad/a/a/a;->q:I

    if-nez p1, :cond_8

    .line 113
    :cond_6
    invoke-static {p7}, Lcom/tkay/expressad/a/a/a;->b(I)Z

    move-result p1

    if-eqz p1, :cond_7

    sget p1, Lcom/tkay/expressad/a/a/a;->r:I

    if-nez p1, :cond_8

    :cond_7
    sget p1, Lcom/tkay/expressad/a/a/a;->m:I

    if-ne p7, p1, :cond_9

    :cond_8
    move v1, v2

    :cond_9
    if-eqz v1, :cond_c

    .line 116
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    .line 118
    invoke-virtual {v3}, Lcom/tkay/expressad/a/a/b;->h()J

    move-result-wide p3

    sget p5, Lcom/tkay/expressad/a/a/a;->g:I

    int-to-long p5, p5

    add-long/2addr p3, p5

    cmp-long p1, p1, p3

    if-gez p1, :cond_b

    .line 2226
    iget-object p1, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    if-nez p1, :cond_a

    .line 2227
    new-instance p1, Lcom/tkay/expressad/a/a/c;

    sget p2, Lcom/tkay/expressad/a/a/a;->f:I

    invoke-direct {p1, p2}, Lcom/tkay/expressad/a/a/c;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    .line 2229
    :cond_a
    iget-object p1, p0, Lcom/tkay/expressad/a/a/a;->p:Lcom/tkay/expressad/a/a/c;

    invoke-virtual {p1, v0, v3}, Lcom/tkay/expressad/a/a/c;->a(Ljava/lang/String;Lcom/tkay/expressad/a/a/b;)Z

    .line 122
    invoke-virtual {v3}, Lcom/tkay/expressad/a/a/b;->c()I

    move-result p1

    sget p2, Lcom/tkay/expressad/a/a/b;->a:I

    if-ne p1, p2, :cond_c

    .line 124
    invoke-virtual {v3}, Lcom/tkay/expressad/a/a/b;->g()I

    move-result p1

    sget p2, Lcom/tkay/expressad/a/a/a;->e:I

    if-gt p1, p2, :cond_c

    .line 125
    invoke-direct {p0, v0}, Lcom/tkay/expressad/a/a/a;->a(Ljava/lang/String;)V

    return-void

    .line 133
    :cond_b
    invoke-virtual {v3}, Lcom/tkay/expressad/a/a/b;->c()I

    sget p1, Lcom/tkay/expressad/a/a/b;->a:I

    :cond_c
    :goto_3
    return-void
.end method
