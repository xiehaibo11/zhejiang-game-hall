.class public Lcom/tkay/china/common/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/common/a/g;


# static fields
.field public static final a:Ljava/lang/String;

.field public static final b:Ljava/lang/String; = "action_offer_download_start"

.field public static final c:Ljava/lang/String; = "action_offer_download_end"

.field public static final d:Ljava/lang/String; = "action_offer_install_start"

.field public static final e:Ljava/lang/String; = "action_offer_install_successful"

.field public static final f:Ljava/lang/String; = "receiver_extra_offer_id"

.field public static final g:Ljava/lang/String; = "receiver_extra_click_id"

.field private static volatile h:Lcom/tkay/china/common/a;


# instance fields
.field private i:Landroid/content/Context;

.field private j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/china/common/a/e;",
            ">;"
        }
    .end annotation
.end field

.field private k:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/a/e;",
            ">;"
        }
    .end annotation
.end field

.field private l:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/a/e;",
            ">;"
        }
    .end annotation
.end field

.field private m:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/a/a$a;",
            ">;"
        }
    .end annotation
.end field

.field private n:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/a/e;",
            ">;"
        }
    .end annotation
.end field

.field private o:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/a/e;",
            ">;"
        }
    .end annotation
.end field

.field private p:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/a/e;",
            ">;"
        }
    .end annotation
.end field

.field private q:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/a/e;",
            ">;"
        }
    .end annotation
.end field

.field private final r:I

.field private s:J

.field private t:Landroid/content/BroadcastReceiver;

.field private u:Lcom/tkay/china/common/service/ApkDownloadService$a;

.field private v:Landroid/content/BroadcastReceiver;

.field private w:Landroid/content/ServiceConnection;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 61
    const-class v0, Lcom/tkay/china/common/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 108
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 81
    iput v0, p0, Lcom/tkay/china/common/a;->r:I

    const-wide/32 v0, 0x240c8400

    .line 82
    iput-wide v0, p0, Lcom/tkay/china/common/a;->s:J

    .line 89
    new-instance v0, Lcom/tkay/china/common/a$1;

    invoke-direct {v0, p0}, Lcom/tkay/china/common/a$1;-><init>(Lcom/tkay/china/common/a;)V

    iput-object v0, p0, Lcom/tkay/china/common/a;->w:Landroid/content/ServiceConnection;

    .line 109
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    .line 111
    new-instance p1, Ljava/util/LinkedList;

    invoke-direct {p1}, Ljava/util/LinkedList;-><init>()V

    invoke-static {p1}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    .line 112
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    .line 113
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    .line 114
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/china/common/a;->m:Ljava/util/concurrent/ConcurrentHashMap;

    .line 117
    invoke-static {}, Lcom/tkay/china/common/c/b;->a()Ljava/lang/String;

    move-result-object p1

    .line 118
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 119
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 120
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    .line 121
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 126
    :cond_0
    :try_start_0
    new-instance p1, Lcom/tkay/china/common/a$2;

    invoke-direct {p1, p0}, Lcom/tkay/china/common/a$2;-><init>(Lcom/tkay/china/common/a;)V

    iput-object p1, p0, Lcom/tkay/china/common/a;->v:Landroid/content/BroadcastReceiver;

    .line 143
    new-instance p1, Landroid/content/IntentFilter;

    invoke-direct {p1}, Landroid/content/IntentFilter;-><init>()V

    const-string v0, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 144
    invoke-virtual {p1, v0}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 145
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/china/common/a;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1, p1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/china/common/a;
    .locals 2

    .line 152
    sget-object v0, Lcom/tkay/china/common/a;->h:Lcom/tkay/china/common/a;

    if-nez v0, :cond_1

    .line 153
    const-class v0, Lcom/tkay/china/common/a;

    monitor-enter v0

    .line 154
    :try_start_0
    sget-object v1, Lcom/tkay/china/common/a;->h:Lcom/tkay/china/common/a;

    if-nez v1, :cond_0

    .line 155
    new-instance v1, Lcom/tkay/china/common/a;

    invoke-direct {v1, p0}, Lcom/tkay/china/common/a;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/china/common/a;->h:Lcom/tkay/china/common/a;

    .line 156
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 158
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/china/common/a;->h:Lcom/tkay/china/common/a;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/china/common/a;Lcom/tkay/china/common/service/ApkDownloadService$a;)Lcom/tkay/china/common/service/ApkDownloadService$a;
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/china/common/a;Ljava/util/Map;)Ljava/util/Map;
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/china/common/a;Ljava/util/concurrent/ConcurrentHashMap;)Ljava/util/concurrent/ConcurrentHashMap;
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    return-object p1
.end method

.method private a(J)V
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-lez v0, :cond_0

    .line 214
    iput-wide p1, p0, Lcom/tkay/china/common/a;->s:J

    :cond_0
    return-void
.end method

.method private static a(Lcom/tkay/china/common/a/e;Z)V
    .locals 3

    .line 934
    iget-object v0, p0, Lcom/tkay/china/common/a/e;->l:Lcom/tkay/core/common/g/b;

    if-eqz v0, :cond_0

    .line 935
    iget-object v0, p0, Lcom/tkay/china/common/a/e;->l:Lcom/tkay/core/common/g/b;

    iget-object v1, p0, Lcom/tkay/china/common/a/e;->j:Lcom/tkay/core/common/f/h;

    iget-object v2, p0, Lcom/tkay/china/common/a/e;->a:Ljava/lang/String;

    iget-object p0, p0, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    invoke-interface {v0, v1, v2, p0, p1}, Lcom/tkay/core/common/g/b;->a(Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/china/common/a;)V
    .locals 2

    .line 5801
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/common/a$4;

    invoke-direct {v1, p0}, Lcom/tkay/china/common/a$4;-><init>(Lcom/tkay/china/common/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/china/common/a;Ljava/lang/String;)V
    .locals 0

    .line 59
    invoke-direct {p0, p1}, Lcom/tkay/china/common/a;->d(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/china/common/a;)Landroid/content/Context;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/china/common/a;)Ljava/util/concurrent/ConcurrentHashMap;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/china/common/a;->m:Ljava/util/concurrent/ConcurrentHashMap;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/china/common/a;)Ljava/util/concurrent/ConcurrentHashMap;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    return-object p0
.end method

.method private d(Ljava/lang/String;)V
    .locals 2

    .line 958
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/common/a$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/china/common/a$5;-><init>(Lcom/tkay/china/common/a;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic e(Lcom/tkay/china/common/a;)Ljava/util/concurrent/ConcurrentHashMap;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    return-object p0
.end method

.method private e(Lcom/tkay/china/common/a/e;)V
    .locals 3

    .line 301
    iget-object v0, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 303
    new-instance v0, Lcom/tkay/china/common/a$3;

    invoke-direct {v0, p0}, Lcom/tkay/china/common/a$3;-><init>(Lcom/tkay/china/common/a;)V

    .line 425
    iget-object v1, p0, Lcom/tkay/china/common/a;->m:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v2, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 429
    :try_start_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    if-eqz v0, :cond_0

    .line 430
    iget-object v0, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    iget-object p1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/tkay/china/common/service/ApkDownloadService$a;->a(Ljava/lang/String;)V

    return-void

    .line 434
    :cond_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 435
    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    const-class v2, Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    const-string v1, "extra_unique_id"

    .line 436
    iget-object p1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 438
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/china/common/a;->w:Landroid/content/ServiceConnection;

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static f(Lcom/tkay/china/common/a/e;)Ljava/lang/String;
    .locals 1

    .line 532
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p0, p0, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-static {p0}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ".apk"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/china/common/a;)Ljava/util/Map;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    return-object p0
.end method

.method private g()V
    .locals 2

    .line 801
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/common/a$4;

    invoke-direct {v1, p0}, Lcom/tkay/china/common/a$4;-><init>(Lcom/tkay/china/common/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private h()V
    .locals 3

    .line 905
    :try_start_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    return-void

    .line 909
    :cond_0
    new-instance v0, Lcom/tkay/china/common/b;

    invoke-direct {v0}, Lcom/tkay/china/common/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    .line 910
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.intent.action.PACKAGE_ADDED"

    .line 911
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.PACKAGE_REPLACED"

    .line 912
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "package"

    .line 913
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    .line 915
    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private i()V
    .locals 2

    .line 924
    :try_start_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    .line 925
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    .line 926
    iput-object v0, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final a(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;Lcom/tkay/core/common/g/b;)V
    .locals 17

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v0, p2

    .line 163
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/tkay/china/common/c/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 165
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v0

    .line 1066
    :try_start_0
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    invoke-virtual {v3, v0}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_0

    const/high16 v3, 0x10000000

    .line 1068
    invoke-virtual {v0, v3}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 1069
    invoke-virtual {v2, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 1072
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void

    :cond_1
    if-eqz p6, :cond_2

    .line 169
    invoke-interface/range {p6 .. p6}, Ljava/lang/Runnable;->run()V

    .line 173
    :cond_2
    new-instance v3, Lcom/tkay/china/common/a/e;

    invoke-direct {v3}, Lcom/tkay/china/common/a/e;-><init>()V

    .line 174
    invoke-static/range {p3 .. p3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    .line 175
    iget-object v4, v0, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    iput-object v4, v3, Lcom/tkay/china/common/a/e;->a:Ljava/lang/String;

    .line 176
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    move-object/from16 v4, p4

    .line 177
    iput-object v4, v3, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    move-object/from16 v4, p5

    .line 178
    iput-object v4, v3, Lcom/tkay/china/common/a/e;->m:Ljava/lang/String;

    .line 179
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/china/common/a/e;->e:Ljava/lang/String;

    .line 180
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    move-object/from16 v4, p3

    .line 181
    iput-object v4, v3, Lcom/tkay/china/common/a/e;->j:Lcom/tkay/core/common/f/h;

    .line 185
    iget-object v5, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    const/4 v6, 0x0

    const/4 v7, 0x1

    if-eqz v5, :cond_4

    .line 186
    iget-object v5, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/j;->d()I

    move-result v5

    if-ne v5, v7, :cond_3

    move v5, v7

    goto :goto_0

    :cond_3
    move v5, v6

    :goto_0
    iput-boolean v5, v3, Lcom/tkay/china/common/a/e;->o:Z

    .line 187
    iget-object v5, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/j;->L()I

    move-result v5

    iput v5, v3, Lcom/tkay/china/common/a/e;->q:I

    .line 188
    iget-object v5, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/j;->K()I

    move-result v5

    iput v5, v3, Lcom/tkay/china/common/a/e;->p:I

    :cond_4
    const/high16 v5, 0x42480000    # 50.0f

    .line 191
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v8

    invoke-virtual {v8}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v8

    invoke-static {v7, v5, v8}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result v5

    float-to-int v5, v5

    .line 192
    invoke-static/range {p1 .. p1}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v8

    new-instance v9, Lcom/tkay/core/common/res/e;

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v10

    invoke-direct {v9, v7, v10}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    invoke-virtual {v8, v9, v5, v5}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;II)Landroid/graphics/Bitmap;

    move-result-object v5

    iput-object v5, v3, Lcom/tkay/china/common/a/e;->d:Landroid/graphics/Bitmap;

    .line 193
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v5

    if-eqz v5, :cond_6

    .line 194
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v4

    iget-object v5, v0, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    if-nez v5, :cond_5

    const-string v5, ""

    goto :goto_1

    :cond_5
    iget-object v5, v0, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    :goto_1
    const-string v7, "\\{req_id\\}"

    invoke-virtual {v4, v7, v5}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/china/common/a/e;->k:Ljava/lang/String;

    :cond_6
    move-object/from16 v4, p7

    .line 196
    iput-object v4, v3, Lcom/tkay/china/common/a/e;->l:Lcom/tkay/core/common/g/b;

    .line 198
    iget-object v4, v1, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v4, :cond_7

    .line 199
    iget-object v5, v3, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 202
    :cond_7
    iget-object v4, v1, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    if-eqz v4, :cond_8

    .line 203
    iget-object v5, v3, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 206
    :cond_8
    invoke-static/range {p1 .. p1}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v4

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->A()J

    move-result-wide v7

    const-wide/16 v9, 0x0

    cmp-long v0, v7, v9

    if-lez v0, :cond_9

    .line 1214
    iput-wide v7, v4, Lcom/tkay/china/common/a;->s:J

    .line 207
    :cond_9
    invoke-static/range {p1 .. p1}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    .line 1539
    :try_start_1
    invoke-static {}, Lcom/tkay/china/common/c/b;->a()Ljava/lang/String;

    move-result-object v4

    .line 1540
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_a

    goto/16 :goto_7

    .line 1544
    :cond_a
    new-instance v5, Ljava/io/File;

    invoke-direct {v5, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1545
    invoke-virtual {v5}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v4

    if-eqz v4, :cond_b

    .line 1546
    array-length v5, v4

    if-nez v5, :cond_b

    goto/16 :goto_7

    .line 1550
    :cond_b
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    .line 1551
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    .line 1552
    iget-wide v9, v0, Lcom/tkay/china/common/a;->s:J

    .line 1553
    array-length v11, v4

    move v12, v6

    :goto_2
    if-ge v12, v11, :cond_10

    aget-object v13, v4, v12

    .line 1554
    invoke-virtual {v13}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v14

    const-string v15, ".apk"

    invoke-virtual {v14, v15}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v14

    if-eqz v14, :cond_e

    .line 1556
    iget-object v14, v0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    if-eqz v14, :cond_d

    if-nez v13, :cond_c

    goto :goto_3

    .line 2057
    :cond_c
    invoke-static {v14, v13}, Lcom/tkay/china/common/c/a;->a(Landroid/content/Context;Ljava/io/File;)Ljava/lang/String;

    move-result-object v15

    .line 2058
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_d

    .line 2059
    invoke-static {v14, v15}, Lcom/tkay/china/common/c/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v14

    goto :goto_4

    :cond_d
    :goto_3
    move v14, v6

    :goto_4
    if-eqz v14, :cond_e

    .line 1557
    invoke-interface {v5, v13}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_5

    .line 1562
    :cond_e
    invoke-virtual {v13}, Ljava/io/File;->lastModified()J

    move-result-wide v14

    add-long/2addr v14, v9

    cmp-long v14, v14, v7

    if-gez v14, :cond_f

    .line 1564
    invoke-interface {v5, v13}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_f
    :goto_5
    add-int/lit8 v12, v12, 0x1

    goto :goto_2

    .line 1569
    :cond_10
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v0

    :goto_6
    if-ge v6, v0, :cond_11

    .line 1571
    sget-object v4, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "clean expired file -> "

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/io/File;

    invoke-virtual {v8}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v4, v7}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1572
    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/io/File;

    invoke-virtual {v4}, Ljava/io/File;->delete()Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    add-int/lit8 v6, v6, 0x1

    goto :goto_6

    :catchall_1
    move-exception v0

    .line 1575
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 208
    :cond_11
    :goto_7
    invoke-static/range {p1 .. p1}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/tkay/china/common/a;->d(Lcom/tkay/china/common/a/e;)V

    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;)V
    .locals 8

    if-nez p1, :cond_0

    return-void

    .line 226
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "("

    if-eqz v0, :cond_2

    .line 228
    new-instance v0, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-static {v3}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".temp"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 229
    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-static {v4}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".log"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 230
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 231
    sget-object v0, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ") is downloading, do nothing"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 232
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u6b63\u5728\u4e0b\u8f7d\u4e2d\uff1a "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p1, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/china/common/a;->d(Ljava/lang/String;)V

    return-void

    .line 235
    :cond_1
    iget-object v0, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v2, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 239
    :cond_2
    iget-object v0, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_4

    .line 241
    iget-object v3, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/china/common/a/e;

    iget-object v4, v4, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 242
    sget-object v0, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ") is waiting for downloading, do nothing"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 243
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u7b49\u5f85\u4e0b\u8f7d\uff1a "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p1, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/china/common/a;->d(Ljava/lang/String;)V

    return-void

    :cond_3
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 248
    :cond_4
    iget-object v0, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 251
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    .line 252
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v1

    const-wide/16 v3, 0x0

    const-wide/16 v5, 0x64

    const/4 v7, 0x1

    move-object v2, p1

    .line 2171
    invoke-virtual/range {v1 .. v7}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;JJZ)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    .line 751
    :try_start_0
    sget-object v0, Lcom/tkay/china/common/a/e$a;->f:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v0}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "("

    if-eqz v0, :cond_0

    .line 752
    :try_start_1
    iget-object v0, p0, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 753
    iget-object v0, p0, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/common/a/e;

    .line 754
    sget-object v2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, v0, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ") onCleanNotification: download fail"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 755
    iget-object v2, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    .line 756
    iget-object v0, p0, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 761
    :cond_0
    sget-object v0, Lcom/tkay/china/common/a/e$a;->e:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v0}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 763
    iget-object v0, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 764
    iget-object v0, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/common/a/e;

    .line 765
    sget-object v2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, v0, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ") onCleanNotification: download success"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 766
    iget-object v2, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    .line 767
    iget-object v0, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 773
    :cond_1
    sget-object v0, Lcom/tkay/china/common/a/e$a;->g:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v0}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 774
    iget-object v0, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 775
    iget-object v0, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/common/a/e;

    .line 776
    sget-object v2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, v0, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ") onCleanNotification: install success"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 777
    iget-object v2, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    .line 778
    iget-object v0, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 783
    :cond_2
    sget-object v0, Lcom/tkay/china/common/a/e$a;->c:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v0}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_4

    .line 784
    iget-object p2, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/china/common/a/e;

    if-eqz p2, :cond_4

    .line 786
    iget-object v0, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    if-eqz v0, :cond_3

    .line 787
    iget-object v0, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    iget-object v2, p2, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/china/common/service/ApkDownloadService$a;->c(Ljava/lang/String;)V

    .line 789
    :cond_3
    iget-object v0, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 790
    sget-object p1, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p2, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ") onCleanNotification: stop download"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_4
    return-void

    :catchall_0
    move-exception p1

    .line 796
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 7

    const/4 v0, 0x0

    .line 609
    :try_start_0
    sget-object v1, Lcom/tkay/china/common/a/e$a;->f:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v1}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 610
    iget-object p2, p0, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    if-eqz p2, :cond_1

    .line 611
    iget-object p2, p0, Lcom/tkay/china/common/a;->q:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/china/common/a/e;

    if-eqz p1, :cond_0

    .line 613
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->e()V

    .line 614
    sget-object p2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    const-string v0, "("

    invoke-direct {p3, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ") onClickNotification: download fail to retry"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 615
    invoke-virtual {p0, p1}, Lcom/tkay/china/common/a;->d(Lcom/tkay/china/common/a/e;)V

    return-void

    .line 618
    :cond_0
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/tkay/china/common/b/a;->a(I)V

    :cond_1
    return-void

    .line 626
    :cond_2
    sget-object v1, Lcom/tkay/china/common/a/e$a;->e:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v1}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 627
    iget-object p2, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p2, :cond_4

    .line 628
    iget-object p2, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/china/common/a/e;

    if-eqz p1, :cond_3

    .line 630
    sget-object p2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    const-string v0, "("

    invoke-direct {p3, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ") onClickNotification: start intall"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 631
    iget-object p2, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p2}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    .line 632
    iget-object p2, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p2}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;)V

    .line 633
    invoke-virtual {p0, p1}, Lcom/tkay/china/common/a;->b(Lcom/tkay/china/common/a/e;)V

    return-void

    .line 636
    :cond_3
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/tkay/china/common/b/a;->a(I)V

    :cond_4
    return-void

    .line 643
    :cond_5
    sget-object v1, Lcom/tkay/china/common/a/e$a;->g:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v1}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8

    .line 644
    iget-object p2, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p2, :cond_7

    .line 645
    iget-object p2, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/china/common/a/e;

    if-eqz p1, :cond_6

    .line 647
    sget-object p2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    const-string v0, "("

    invoke-direct {p3, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ") onClickNotification: start open"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 648
    iget-object p2, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p2}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    const/4 p2, 0x1

    .line 649
    invoke-static {p1, p2}, Lcom/tkay/china/common/a;->a(Lcom/tkay/china/common/a/e;Z)V

    return-void

    .line 652
    :cond_6
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/tkay/china/common/b/a;->a(I)V

    :cond_7
    return-void

    .line 659
    :cond_8
    sget-object v1, Lcom/tkay/china/common/a/e$a;->b:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v1}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x2

    if-eqz v1, :cond_d

    .line 660
    iget-object p2, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/china/common/a/e;

    if-eqz p1, :cond_b

    .line 662
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->d()Z

    move-result p2

    if-eqz p2, :cond_c

    .line 663
    iget p2, p1, Lcom/tkay/china/common/a/e;->q:I

    if-ne p2, v2, :cond_9

    return-void

    .line 666
    :cond_9
    sget-object p2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    const-string v0, "("

    invoke-direct {p3, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ") onClickNotification: pause download"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 667
    iget-object p2, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    if-eqz p2, :cond_a

    .line 668
    iget-object p2, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    iget-object p3, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {p2, p3}, Lcom/tkay/china/common/service/ApkDownloadService$a;->b(Ljava/lang/String;)V

    .line 670
    :cond_a
    iget-object p2, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object p3, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {p2, p3, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    .line 674
    :cond_b
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/tkay/china/common/b/a;->a(I)V

    :cond_c
    return-void

    .line 680
    :cond_d
    sget-object v1, Lcom/tkay/china/common/a/e$a;->c:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v1}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_f

    .line 681
    iget-object p2, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/china/common/a/e;

    if-eqz p1, :cond_e

    .line 684
    sget-object p2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    const-string v0, "("

    invoke-direct {p3, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ") onClickNotification: resume download"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 685
    invoke-virtual {p0, p1}, Lcom/tkay/china/common/a;->d(Lcom/tkay/china/common/a/e;)V

    return-void

    .line 688
    :cond_e
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/tkay/china/common/b/a;->a(I)V

    return-void

    .line 694
    :cond_f
    sget-object v1, Lcom/tkay/china/common/a/e$a;->a:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v1}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_14

    .line 695
    iget-object p2, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    monitor-enter p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 696
    :try_start_1
    iget-object v1, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_10
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_12

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/china/common/a/e;

    .line 697
    iget-object v4, v3, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v4, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_10

    .line 698
    iget p1, v3, Lcom/tkay/china/common/a/e;->q:I

    if-ne p1, v2, :cond_11

    .line 699
    monitor-exit p2

    return-void

    .line 701
    :cond_11
    sget-object p1, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "("

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, v3, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ") onClickNotification: pause download"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 703
    iget-object p1, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {p1, v3}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    move-object v1, v3

    goto :goto_0

    :cond_12
    move-object v1, v0

    .line 707
    :goto_0
    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_13

    .line 710
    :try_start_2
    invoke-virtual {v1}, Lcom/tkay/china/common/a/e;->k()V

    .line 711
    iget-object p1, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object p2, v1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {p1, p2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 712
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    .line 713
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v0

    const-wide/16 v2, 0x0

    const-wide/16 v4, 0x64

    const/4 v6, 0x1

    invoke-virtual/range {v0 .. v6}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;JJZ)V

    return-void

    .line 715
    :cond_13
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/tkay/china/common/b/a;->a(I)V

    return-void

    :catchall_0
    move-exception p1

    .line 707
    monitor-exit p2

    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_14
    return-void

    :catchall_1
    move-exception p1

    .line 741
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/h;)Z
    .locals 1

    .line 942
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object p1

    .line 943
    iget-object v0, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 1

    .line 262
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {p1}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".apk"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 263
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 264
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 265
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final b(Lcom/tkay/core/common/f/h;)I
    .locals 5

    .line 974
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object v0

    .line 976
    iget-object v1, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    monitor-enter v1

    const/4 v2, 0x0

    move v3, v2

    .line 977
    :goto_0
    :try_start_0
    iget-object v4, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 978
    iget-object v4, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/china/common/a/e;

    if-eqz v4, :cond_0

    .line 979
    iget-object v4, v4, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 980
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v2

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 983
    :cond_1
    monitor-exit v1

    .line 985
    iget-object v1, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v1, :cond_2

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    return v2

    .line 989
    :cond_2
    iget-object v1, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v1, :cond_3

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    const/4 p1, 0x6

    return p1

    .line 993
    :cond_3
    iget-object v1, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v2, 0x4

    if-eqz v1, :cond_4

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    return v2

    .line 997
    :cond_4
    invoke-virtual {p0, v0}, Lcom/tkay/china/common/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    return v2

    .line 1001
    :cond_5
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/tkay/china/common/c/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_6

    const/4 p1, 0x5

    return p1

    :cond_6
    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    .line 983
    monitor-exit v1

    throw p1
.end method

.method public final b()V
    .locals 9

    .line 272
    iget-object v0, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    monitor-enter v0

    .line 273
    :try_start_0
    iget-object v1, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    .line 275
    monitor-exit v0

    return-void

    .line 280
    :cond_0
    iget-object v2, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v2

    if-lez v2, :cond_1

    .line 282
    monitor-exit v0

    return-void

    :cond_1
    const/4 v3, 0x1

    rsub-int/lit8 v2, v2, 0x1

    .line 287
    invoke-static {v2, v1}, Ljava/lang/Math;->min(II)I

    move-result v1

    const/4 v2, 0x0

    move v4, v2

    :goto_0
    if-ge v4, v1, :cond_3

    .line 290
    iget-object v5, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_3

    .line 293
    iget-object v5, p0, Lcom/tkay/china/common/a;->j:Ljava/util/List;

    invoke-interface {v5, v2}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/china/common/a/e;

    .line 2301
    iget-object v6, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v7, v5, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v6, v7, v5}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2303
    new-instance v6, Lcom/tkay/china/common/a$3;

    invoke-direct {v6, p0}, Lcom/tkay/china/common/a$3;-><init>(Lcom/tkay/china/common/a;)V

    .line 2425
    iget-object v7, p0, Lcom/tkay/china/common/a;->m:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v8, v5, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v7, v8, v6}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 2429
    :try_start_1
    iget-object v6, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    if-eqz v6, :cond_2

    .line 2430
    iget-object v6, p0, Lcom/tkay/china/common/a;->u:Lcom/tkay/china/common/service/ApkDownloadService$a;

    iget-object v5, v5, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v6, v5}, Lcom/tkay/china/common/service/ApkDownloadService$a;->a(Ljava/lang/String;)V

    goto :goto_1

    .line 2434
    :cond_2
    new-instance v6, Landroid/content/Intent;

    invoke-direct {v6}, Landroid/content/Intent;-><init>()V

    .line 2435
    iget-object v7, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    const-class v8, Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-virtual {v6, v7, v8}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    const-string v7, "extra_unique_id"

    .line 2436
    iget-object v5, v5, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v6, v7, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 2438
    iget-object v5, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    iget-object v7, p0, Lcom/tkay/china/common/a;->w:Landroid/content/ServiceConnection;

    invoke-virtual {v5, v6, v7, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :goto_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 297
    :cond_3
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public final b(Lcom/tkay/china/common/a/e;)V
    .locals 12

    .line 470
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "action_offer_install_start"

    .line 471
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 472
    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 473
    iget-object v1, p1, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    const-string v2, "receiver_extra_offer_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 474
    iget-object v1, p1, Lcom/tkay/china/common/a/e;->m:Ljava/lang/String;

    const-string v2, "receiver_extra_click_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 475
    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/m;->a(Landroid/content/Context;)Lcom/tkay/core/common/m;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/m;->a(Landroid/content/Intent;)Z

    .line 477
    iget-object v0, p0, Lcom/tkay/china/common/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_0

    .line 478
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/china/common/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    .line 481
    :cond_0
    iget-object v0, p1, Lcom/tkay/china/common/a/e;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 482
    invoke-static {p1}, Lcom/tkay/china/common/a;->f(Lcom/tkay/china/common/a/e;)Ljava/lang/String;

    move-result-object v0

    .line 483
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 484
    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v1, v2}, Lcom/tkay/china/common/c/a;->a(Landroid/content/Context;Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/tkay/china/common/a/e;->e:Ljava/lang/String;

    .line 487
    :cond_1
    iget-object v0, p0, Lcom/tkay/china/common/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2905
    :try_start_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_2

    goto :goto_0

    .line 2909
    :cond_2
    new-instance v0, Lcom/tkay/china/common/b;

    invoke-direct {v0}, Lcom/tkay/china/common/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    .line 2910
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.intent.action.PACKAGE_ADDED"

    .line 2911
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.PACKAGE_REPLACED"

    .line 2912
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "package"

    .line 2913
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    .line 2915
    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 3500
    :catchall_0
    :goto_0
    invoke-static {p1}, Lcom/tkay/china/common/a;->f(Lcom/tkay/china/common/a/e;)Ljava/lang/String;

    move-result-object v0

    .line 3501
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 3505
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "install: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3507
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 3510
    :try_start_1
    new-instance v2, Landroid/content/Intent;

    const-string v3, "android.intent.action.VIEW"

    invoke-direct {v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const/high16 v3, 0x10000000

    .line 3511
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 3513
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/16 v4, 0x18

    const-string v5, "application/vnd.android.package-archive"

    if-lt v3, v4, :cond_3

    const/4 v0, 0x1

    .line 3514
    :try_start_2
    invoke-virtual {v2, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 3516
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".tkay.fileProvider"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, v1}, Landroid/support/v4/content/FileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    .line 3517
    invoke-virtual {v2, v0, v5}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_1

    :cond_3
    const-string v3, "file://"

    .line 3519
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v2, v0, v5}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    .line 3521
    :goto_1
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v0, v2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 3523
    iget-object v3, p1, Lcom/tkay/china/common/a/e;->a:Ljava/lang/String;

    iget-object v4, p1, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    iget-object v5, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    const/4 v6, 0x4

    const/4 v7, 0x0

    const-wide/16 v8, 0x0

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v10

    invoke-static/range {v3 .. v11}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    .line 3525
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 3527
    iget-object v2, p1, Lcom/tkay/china/common/a/e;->a:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    iget-object v4, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    const/16 v5, 0xa

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v6

    const-wide/16 v7, 0x0

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v9

    invoke-static/range {v2 .. v10}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V

    :cond_4
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 11

    .line 853
    :try_start_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 856
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/common/a/e;

    if-nez v0, :cond_1

    return-void

    .line 861
    :cond_1
    invoke-static {v0}, Lcom/tkay/china/common/a;->f(Lcom/tkay/china/common/a/e;)Ljava/lang/String;

    move-result-object v1

    .line 862
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 863
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    .line 867
    :cond_2
    invoke-virtual {v0}, Lcom/tkay/china/common/a/e;->m()V

    .line 869
    iget-object v1, p0, Lcom/tkay/china/common/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 871
    iget-object p1, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez p1, :cond_3

    .line 872
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    .line 875
    :cond_3
    iget-object p1, p0, Lcom/tkay/china/common/a;->p:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v1, v0, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {p1, v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 877
    iget-object p1, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p1, :cond_4

    .line 878
    iget-object p1, p0, Lcom/tkay/china/common/a;->n:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v1, v0, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 880
    :cond_4
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    .line 882
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v1

    const-wide/16 v3, 0x0

    const-wide/16 v5, 0x64

    const/4 v7, 0x1

    move-object v2, v0

    .line 4175
    invoke-virtual/range {v1 .. v7}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;JJZ)V

    .line 884
    new-instance p1, Landroid/content/Intent;

    invoke-direct {p1}, Landroid/content/Intent;-><init>()V

    const-string v1, "action_offer_install_successful"

    .line 885
    invoke-virtual {p1, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 886
    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "receiver_extra_offer_id"

    .line 887
    iget-object v2, v0, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "receiver_extra_click_id"

    .line 888
    iget-object v2, v0, Lcom/tkay/china/common/a/e;->m:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 889
    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/m;->a(Landroid/content/Context;)Lcom/tkay/core/common/m;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/tkay/core/common/m;->a(Landroid/content/Intent;)Z

    .line 891
    iget-object v2, v0, Lcom/tkay/china/common/a/e;->a:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    const/4 v5, 0x5

    const/4 v6, 0x0

    const-wide/16 v7, 0x0

    const-wide/16 v9, 0x0

    invoke-static/range {v2 .. v10}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V

    .line 893
    iget-object p1, p0, Lcom/tkay/china/common/a;->o:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez p1, :cond_5

    .line 4924
    :try_start_1
    iget-object p1, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    if-eqz p1, :cond_5

    .line 4925
    iget-object p1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;

    invoke-virtual {p1, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    .line 4926
    iput-object p1, p0, Lcom/tkay/china/common/a;->t:Landroid/content/BroadcastReceiver;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_5
    const/4 p1, 0x0

    .line 897
    :try_start_2
    invoke-static {v0, p1}, Lcom/tkay/china/common/a;->a(Lcom/tkay/china/common/a/e;Z)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception p1

    .line 899
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final c(Ljava/lang/String;)Lcom/tkay/china/common/a/a$a;
    .locals 1

    .line 954
    iget-object v0, p0, Lcom/tkay/china/common/a;->m:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/china/common/a/a$a;

    return-object p1
.end method

.method public final c(Lcom/tkay/china/common/a/e;)V
    .locals 12

    .line 500
    invoke-static {p1}, Lcom/tkay/china/common/a;->f(Lcom/tkay/china/common/a/e;)Ljava/lang/String;

    move-result-object v0

    .line 501
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 505
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "install: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 507
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 510
    :try_start_0
    new-instance v2, Landroid/content/Intent;

    const-string v3, "android.intent.action.VIEW"

    invoke-direct {v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const/high16 v3, 0x10000000

    .line 511
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 513
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v4, 0x18

    const-string v5, "application/vnd.android.package-archive"

    if-lt v3, v4, :cond_1

    const/4 v0, 0x1

    .line 514
    :try_start_1
    invoke-virtual {v2, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 516
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".tkay.fileProvider"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, v1}, Landroid/support/v4/content/FileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    .line 517
    invoke-virtual {v2, v0, v5}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_0

    :cond_1
    const-string v3, "file://"

    .line 519
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v2, v0, v5}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    .line 521
    :goto_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v0, v2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 523
    iget-object v3, p1, Lcom/tkay/china/common/a/e;->a:Ljava/lang/String;

    iget-object v4, p1, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    iget-object v5, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    const/4 v6, 0x4

    const/4 v7, 0x0

    const-wide/16 v8, 0x0

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v10

    invoke-static/range {v3 .. v11}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 525
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 527
    iget-object v2, p1, Lcom/tkay/china/common/a/e;->a:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    iget-object v4, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    const/16 v5, 0xa

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v6

    const-wide/16 v7, 0x0

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v9

    invoke-static/range {v2 .. v10}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V

    return-void
.end method

.method public final c()Z
    .locals 2

    .line 446
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1a

    if-lt v0, v1, :cond_0

    .line 447
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/pm/PackageManager;->canRequestPackageInstalls()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public final d()V
    .locals 3

    .line 458
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "package:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 459
    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.settings.MANAGE_UNKNOWN_APP_SOURCES"

    invoke-direct {v1, v2, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    const/high16 v0, 0x10000000

    .line 460
    invoke-virtual {v1, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 461
    iget-object v0, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    invoke-virtual {v0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public final d(Lcom/tkay/china/common/a/e;)V
    .locals 2

    .line 583
    :try_start_0
    iget-object v0, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/tkay/china/common/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 584
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->l()V

    .line 585
    invoke-virtual {p0, p1}, Lcom/tkay/china/common/a;->b(Lcom/tkay/china/common/a/e;)V

    return-void

    .line 589
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/common/a/e;

    if-eqz v0, :cond_1

    .line 591
    iget-object v1, p0, Lcom/tkay/china/common/a;->l:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object p1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 592
    invoke-virtual {v0}, Lcom/tkay/china/common/a/e;->e()V

    .line 593
    invoke-virtual {p0, v0}, Lcom/tkay/china/common/a;->a(Lcom/tkay/china/common/a/e;)V

    goto :goto_0

    .line 595
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tkay/china/common/a;->a(Lcom/tkay/china/common/a/e;)V

    .line 597
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/china/common/a;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 599
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final e()V
    .locals 13

    .line 539
    :try_start_0
    invoke-static {}, Lcom/tkay/china/common/c/b;->a()Ljava/lang/String;

    move-result-object v0

    .line 540
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 544
    :cond_0
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 545
    invoke-virtual {v1}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 546
    array-length v1, v0

    if-nez v1, :cond_1

    return-void

    .line 550
    :cond_1
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 551
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 552
    iget-wide v4, p0, Lcom/tkay/china/common/a;->s:J

    .line 553
    array-length v6, v0

    const/4 v7, 0x0

    move v8, v7

    :goto_0
    if-ge v8, v6, :cond_6

    aget-object v9, v0, v8

    .line 554
    invoke-virtual {v9}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v10

    const-string v11, ".apk"

    invoke-virtual {v10, v11}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v10

    if-eqz v10, :cond_4

    .line 556
    iget-object v10, p0, Lcom/tkay/china/common/a;->i:Landroid/content/Context;

    if-eqz v10, :cond_3

    if-nez v9, :cond_2

    goto :goto_1

    .line 4057
    :cond_2
    invoke-static {v10, v9}, Lcom/tkay/china/common/c/a;->a(Landroid/content/Context;Ljava/io/File;)Ljava/lang/String;

    move-result-object v11

    .line 4058
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_3

    .line 4059
    invoke-static {v10, v11}, Lcom/tkay/china/common/c/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v10

    goto :goto_2

    :cond_3
    :goto_1
    move v10, v7

    :goto_2
    if-eqz v10, :cond_4

    .line 557
    invoke-interface {v1, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 562
    :cond_4
    invoke-virtual {v9}, Ljava/io/File;->lastModified()J

    move-result-wide v10

    add-long/2addr v10, v4

    cmp-long v10, v10, v2

    if-gez v10, :cond_5

    .line 564
    invoke-interface {v1, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_5
    :goto_3
    add-int/lit8 v8, v8, 0x1

    goto :goto_0

    .line 569
    :cond_6
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    :goto_4
    if-ge v7, v0, :cond_7

    .line 571
    sget-object v2, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "clean expired file -> "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/io/File;

    invoke-virtual {v4}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 572
    invoke-interface {v1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->delete()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v7, v7, 0x1

    goto :goto_4

    :cond_7
    return-void

    :catchall_0
    move-exception v0

    .line 575
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final f()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/a/e;",
            ">;"
        }
    .end annotation

    .line 950
    iget-object v0, p0, Lcom/tkay/china/common/a;->k:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method
