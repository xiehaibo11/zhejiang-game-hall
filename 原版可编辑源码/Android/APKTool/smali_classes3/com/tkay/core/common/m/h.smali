.class public final Lcom/tkay/core/common/m/h;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field b:Z

.field c:Z

.field d:Z

.field e:Z

.field f:Z

.field g:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 14
    const-class v0, Lcom/tkay/core/common/h;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/m/h;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 17
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->b:Z

    .line 18
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->c:Z

    .line 20
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->d:Z

    .line 21
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->e:Z

    .line 23
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->f:Z

    .line 24
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->g:Z

    return-void
.end method

.method private i()Z
    .locals 1

    .line 64
    iget-boolean v0, p0, Lcom/tkay/core/common/m/h;->f:Z

    return v0
.end method

.method private j()V
    .locals 1

    const/4 v0, 0x1

    .line 68
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->f:Z

    return-void
.end method

.method private k()Z
    .locals 1

    .line 72
    iget-boolean v0, p0, Lcom/tkay/core/common/m/h;->g:Z

    return v0
.end method

.method private l()V
    .locals 1

    const/4 v0, 0x1

    .line 76
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->g:Z

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x1

    .line 32
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->b:Z

    return-void
.end method

.method public final b()Z
    .locals 1

    .line 36
    iget-boolean v0, p0, Lcom/tkay/core/common/m/h;->b:Z

    return v0
.end method

.method public final c()Z
    .locals 1

    .line 40
    iget-boolean v0, p0, Lcom/tkay/core/common/m/h;->c:Z

    return v0
.end method

.method public final d()V
    .locals 1

    const/4 v0, 0x1

    .line 44
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->c:Z

    return-void
.end method

.method public final e()Z
    .locals 1

    .line 48
    iget-boolean v0, p0, Lcom/tkay/core/common/m/h;->d:Z

    return v0
.end method

.method public final f()V
    .locals 1

    const/4 v0, 0x1

    .line 52
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->d:Z

    return-void
.end method

.method public final g()Z
    .locals 1

    .line 56
    iget-boolean v0, p0, Lcom/tkay/core/common/m/h;->e:Z

    return v0
.end method

.method public final h()V
    .locals 1

    const/4 v0, 0x1

    .line 60
    iput-boolean v0, p0, Lcom/tkay/core/common/m/h;->e:Z

    return-void
.end method
