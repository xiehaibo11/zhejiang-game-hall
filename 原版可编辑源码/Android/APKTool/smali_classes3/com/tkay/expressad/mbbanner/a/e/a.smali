.class public Lcom/tkay/expressad/mbbanner/a/e/a;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private final b:Landroid/os/Handler;

.field private c:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12
    const-class v0, Lcom/tkay/expressad/mbbanner/a/e/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/mbbanner/a/e/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/e/a;->b:Landroid/os/Handler;

    return-void
.end method

.method private a(Lcom/tkay/expressad/mbbanner/a/c/b;Lcom/tkay/expressad/foundation/d/d;Ljava/lang/String;)V
    .locals 2

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/e/a;->b:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/e/a$1;

    invoke-direct {v1, p0, p1, p3, p2}, Lcom/tkay/expressad/mbbanner/a/e/a$1;-><init>(Lcom/tkay/expressad/mbbanner/a/e/a;Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/d;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private a(Z)V
    .locals 0

    .line 22
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/a/e/a;->c:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/a/e/a;)Z
    .locals 0

    .line 11
    iget-boolean p0, p0, Lcom/tkay/expressad/mbbanner/a/e/a;->c:Z

    return p0
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V
    .locals 2

    .line 60
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/e/a;->b:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/e/a$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/mbbanner/a/e/a$3;-><init>(Lcom/tkay/expressad/mbbanner/a/e/a;Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 44
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "postCampaignFail errorMsg="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " unitId="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 46
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/e/a;->b:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/e/a$2;

    invoke-direct {v1, p0, p1, p3, p2}, Lcom/tkay/expressad/mbbanner/a/e/a$2;-><init>(Lcom/tkay/expressad/mbbanner/a/e/a;Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final b(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V
    .locals 2

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/e/a;->b:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/e/a$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/mbbanner/a/e/a$4;-><init>(Lcom/tkay/expressad/mbbanner/a/e/a;Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
