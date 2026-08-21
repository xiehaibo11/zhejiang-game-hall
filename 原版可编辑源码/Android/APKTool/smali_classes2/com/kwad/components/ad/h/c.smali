.class public final Lcom/kwad/components/ad/h/c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# static fields
.field private static final nV:Landroid/os/Handler;

.field private static volatile nZ:Z


# instance fields
.field private final nW:J

.field private final nX:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private nY:Z

.field private oa:Lcom/kwad/components/ad/h/d;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/kwad/components/ad/h/c;->nV:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>(Lcom/kwad/components/core/internal/api/a;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/h/c;->nY:Z

    invoke-interface {p1}, Lcom/kwad/components/core/internal/api/a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/h/c;->nX:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cE(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    int-to-long v0, p1

    iput-wide v0, p0, Lcom/kwad/components/ad/h/c;->nW:J

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "PushAdManager create adTemplate: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/h/c;->nX:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->hashCode()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ", "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v0, p0, Lcom/kwad/components/ad/h/c;->nW:J

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "PushAdManager"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/h/c;Lcom/kwad/components/ad/h/d;)Lcom/kwad/components/ad/h/d;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/h/c;->oa:Lcom/kwad/components/ad/h/d;

    return-object p1
.end method

.method private static a(ILjava/lang/Runnable;J)V
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/h/c;->nV:Landroid/os/Handler;

    invoke-static {v0, p1}, Landroid/os/Message;->obtain(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;

    move-result-object p1

    iput p0, p1, Landroid/os/Message;->what:I

    sget-object p0, Lcom/kwad/components/ad/h/c;->nV:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void
.end method

.method static synthetic access$002(Z)Z
    .locals 0

    const/4 p0, 0x0

    sput-boolean p0, Lcom/kwad/components/ad/h/c;->nZ:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/h/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/h/c;->ff()V

    return-void
.end method

.method private ff()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/h/b;->fa()Lcom/kwad/components/ad/h/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/h/b;->fc()Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "PushAdManager"

    const-string v1, "run preCheckResult false"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const/4 v0, 0x0

    sput-boolean v0, Lcom/kwad/components/ad/h/c;->nZ:Z

    iget-boolean v0, p0, Lcom/kwad/components/ad/h/c;->nY:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/h/c;->oa:Lcom/kwad/components/ad/h/d;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/ad/h/d;->fk()Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/h/c;->nY:Z

    iget-object v0, p0, Lcom/kwad/components/ad/h/c;->oa:Lcom/kwad/components/ad/h/d;

    new-instance v1, Lcom/kwad/components/ad/h/c$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/h/c$3;-><init>(Lcom/kwad/components/ad/h/c;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/h/d;->c(Lcom/kwad/components/ad/b/a/b;)Z

    :cond_2
    return-void
.end method


# virtual methods
.method public final d(Lcom/kwad/components/core/internal/api/a;)V
    .locals 5

    invoke-interface {p1}, Lcom/kwad/components/core/internal/api/a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/h/c;->nX:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "PushAdManager"

    if-nez v1, :cond_0

    const-string p1, "onAdExit not current ad"

    invoke-static {v2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "onAdExit showPushAdDelayTime: "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v3, p0, Lcom/kwad/components/ad/h/c;->nW:J

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ", adTemplate: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->hashCode()I

    move-result v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1}, Lcom/kwad/components/core/internal/api/a;->ae()Z

    move-result p1

    if-eqz p1, :cond_1

    const p1, 0xf4241

    iget-wide v0, p0, Lcom/kwad/components/ad/h/c;->nW:J

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/components/ad/h/c;->a(ILjava/lang/Runnable;J)V

    :cond_1
    return-void
.end method

.method public final fe()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "startRequestPushAd processingPush: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean v1, Lcom/kwad/components/ad/h/c;->nZ:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PushAdManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    sget-boolean v0, Lcom/kwad/components/ad/h/c;->nZ:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/h/c;->nX:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/components/ad/h/c;->nZ:Z

    iget-object v0, p0, Lcom/kwad/components/ad/h/c;->nX:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    new-instance v1, Lcom/kwad/components/ad/h/c$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/h/c$1;-><init>(Lcom/kwad/components/ad/h/c;)V

    invoke-static {v0, v1}, Lcom/kwad/components/core/i/a;->b(Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/components/core/i/a$a;)V

    :cond_1
    return-void
.end method

.method public final fg()V
    .locals 3

    const-string v0, "PushAdManager"

    const-string v1, "onOutSDKPage: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v1, Lcom/kwad/components/ad/h/c;->nV:Landroid/os/Handler;

    const v2, 0xf4241

    invoke-virtual {v1, v2}, Landroid/os/Handler;->hasMessages(I)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "onOutSDKPage: sendMessageDelay MSG_WHAT_PAGE_OUT"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const v0, 0xf4242

    const-wide/16 v1, 0x1f4

    invoke-static {v0, p0, v1, v2}, Lcom/kwad/components/ad/h/c;->a(ILjava/lang/Runnable;J)V

    :cond_0
    return-void
.end method

.method public final run()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/e/a/e;->mN()Lcom/kwad/components/core/e/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/a/e;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/e/a/e;->mN()Lcom/kwad/components/core/e/a/e;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/h/c$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/h/c$2;-><init>(Lcom/kwad/components/ad/h/c;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/a/e;->a(Lcom/kwad/components/core/e/a/b;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/h/c;->ff()V

    return-void
.end method
