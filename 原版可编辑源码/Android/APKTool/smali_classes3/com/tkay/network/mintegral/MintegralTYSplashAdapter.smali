.class public Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;


# static fields
.field private static final j:Ljava/lang/String;


# instance fields
.field a:Ljava/lang/String;

.field b:I

.field c:I

.field d:Z

.field e:Ljava/lang/String;

.field f:Ljava/lang/String;

.field g:Ljava/lang/String;

.field h:Ljava/lang/String;

.field i:Lcom/mbridge/msdk/out/MBSplashHandler;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 43
    const-class v0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->j:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 41
    invoke-direct {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;-><init>()V

    const/4 v0, 0x5

    .line 46
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->b:I

    const/4 v0, 0x1

    .line 47
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->c:I

    .line 48
    iput-boolean v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->d:Z

    const-string v0, ""

    .line 50
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->e:Ljava/lang/String;

    .line 51
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->f:Ljava/lang/String;

    .line 52
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->g:Ljava/lang/String;

    .line 53
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->h:Ljava/lang/String;

    const/4 v0, 0x0

    .line 55
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 41
    sget-object v0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->j:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;Ljava/util/Map;)V
    .locals 9

    .line 1120
    new-instance v8, Lcom/mbridge/msdk/out/MBSplashHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->h:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->f:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->d:Z

    iget v4, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->b:I

    iget v5, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->c:I

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v0, v8

    invoke-direct/range {v0 .. v7}, Lcom/mbridge/msdk/out/MBSplashHandler;-><init>(Ljava/lang/String;Ljava/lang/String;ZIIII)V

    iput-object v8, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    .line 1121
    iget v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mFetchAdTimeout:I

    div-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {v8, v0, v1}, Lcom/mbridge/msdk/out/MBSplashHandler;->setLoadTimeOut(J)V

    .line 1123
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    new-instance v1, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBSplashHandler;->setSplashLoadListener(Lcom/mbridge/msdk/out/MBSplashLoadListener;)V

    .line 1162
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    new-instance v1, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;

    invoke-direct {v1, p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;-><init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBSplashHandler;->setSplashShowListener(Lcom/mbridge/msdk/out/MBSplashShowListener;)V

    .line 1231
    invoke-direct {p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1232
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    const/4 v1, 0x7

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 1233
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/out/MBSplashHandler;->preLoadByToken(Ljava/lang/String;)V

    goto :goto_0

    .line 1235
    :cond_0
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 1236
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBSplashHandler;->preLoad()V

    .line 1238
    :goto_0
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    invoke-virtual {p0}, Lcom/mbridge/msdk/out/MBSplashHandler;->onResume()V

    return-void
.end method

.method private a(Ljava/util/Map;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 120
    new-instance v8, Lcom/mbridge/msdk/out/MBSplashHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->h:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->f:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->d:Z

    iget v4, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->b:I

    iget v5, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->c:I

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v0, v8

    invoke-direct/range {v0 .. v7}, Lcom/mbridge/msdk/out/MBSplashHandler;-><init>(Ljava/lang/String;Ljava/lang/String;ZIIII)V

    iput-object v8, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    .line 121
    iget v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mFetchAdTimeout:I

    div-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {v8, v0, v1}, Lcom/mbridge/msdk/out/MBSplashHandler;->setLoadTimeOut(J)V

    .line 123
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    new-instance v1, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBSplashHandler;->setSplashLoadListener(Lcom/mbridge/msdk/out/MBSplashLoadListener;)V

    .line 162
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    new-instance v1, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;

    invoke-direct {v1, p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;-><init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBSplashHandler;->setSplashShowListener(Lcom/mbridge/msdk/out/MBSplashShowListener;)V

    .line 231
    invoke-direct {p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 232
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    const/4 v1, 0x7

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 233
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/out/MBSplashHandler;->preLoadByToken(Ljava/lang/String;)V

    goto :goto_0

    .line 235
    :cond_0
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 236
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBSplashHandler;->preLoad()V

    .line 238
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBSplashHandler;->onResume()V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private b()Z
    .locals 1

    .line 242
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic c(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)I
    .locals 1

    const/16 v0, 0x63

    .line 41
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic n(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 41
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic u(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic v(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)I
    .locals 1

    const/4 v0, 0x3

    .line 41
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic w(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)I
    .locals 1

    const/4 v0, 0x4

    .line 41
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic y(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    .line 268
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    if-eqz v0, :cond_0

    .line 269
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBSplashHandler;->onPause()V

    .line 270
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBSplashHandler;->onDestroy()V

    :cond_0
    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    const-string v0, "unitid"

    .line 296
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->f:Ljava/lang/String;

    .line 297
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v1

    const/4 v5, 0x5

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v6, p4

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;ILcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 286
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 263
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 276
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->f:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 281
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 2

    .line 247
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBSplashHandler;->isReady(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBSplashHandler;->isReady()Z

    move-result v0

    if-eqz v0, :cond_1

    :goto_0
    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "orientation"

    const-string v1, "allows_skip"

    const-string v2, ""

    :try_start_0
    const-string v3, "appid"

    .line 63
    invoke-static {p2, v3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->e:Ljava/lang/String;

    const-string v3, "appkey"

    .line 64
    invoke-static {p2, v3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->g:Ljava/lang/String;

    const-string v3, "unitid"

    .line 65
    invoke-static {p2, v3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->f:Ljava/lang/String;

    const-string v3, "payload"

    .line 66
    invoke-static {p2, v3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a:Ljava/lang/String;

    const-string v3, "placement_id"

    .line 67
    invoke-static {p2, v3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->h:Ljava/lang/String;

    .line 69
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->e:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->f:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->g:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_1

    :cond_0
    const-string v3, "countdown"

    const/4 v4, 0x5

    .line 76
    invoke-static {p2, v3, v4}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v3

    iput v3, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->b:I

    .line 80
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_2

    .line 81
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v1

    if-ne v1, v4, :cond_1

    move v1, v4

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    .line 82
    :goto_0
    iput-boolean v1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->d:Z

    .line 85
    :cond_2
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 86
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "2"

    .line 87
    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/4 v4, 0x2

    :cond_3
    iput v4, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->c:I

    .line 91
    :cond_4
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    new-instance v3, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$1;

    invoke-direct {v3, p0, p2, p1, p3}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;Ljava/util/Map;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {v0, v1, p2, v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    .line 70
    :cond_5
    :goto_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_6

    .line 71
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    const-string p2, "mintegral appid ,unitid or sdkkey is empty."

    invoke-interface {p1, v2, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_6
    return-void

    :catch_0
    move-exception p1

    .line 112
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 113
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p2, :cond_7

    .line 114
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v2, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 1

    .line 252
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    if-eqz p1, :cond_1

    .line 253
    invoke-direct {p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->b()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 254
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a:Ljava/lang/String;

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/out/MBSplashHandler;->show(Landroid/view/ViewGroup;Ljava/lang/String;)V

    return-void

    .line 256
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/out/MBSplashHandler;->show(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method
