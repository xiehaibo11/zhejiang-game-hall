.class public final Lcom/kwad/components/core/p/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/p/a/a$a;
    }
.end annotation


# instance fields
.field public final Lj:Lcom/kwad/components/core/p/a/b;

.field public final PI:Lcom/kwad/components/core/p/b;

.field public PJ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public PK:Z

.field public PL:Z

.field public PM:Lcom/kwad/components/core/p/a/d;


# direct methods
.method private constructor <init>(Lcom/kwad/components/core/p/a/a$a;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iget-object v0, p1, Lcom/kwad/components/core/p/a/a$a;->Lj:Lcom/kwad/components/core/p/a/b;

    iput-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, p1, Lcom/kwad/components/core/p/a/a$a;->PI:Lcom/kwad/components/core/p/b;

    iput-object v0, p0, Lcom/kwad/components/core/p/a/a;->PI:Lcom/kwad/components/core/p/b;

    iget-boolean v0, p1, Lcom/kwad/components/core/p/a/a$a;->PK:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/p/a/a;->PK:Z

    iget-boolean p1, p1, Lcom/kwad/components/core/p/a/a$a;->PL:Z

    iput-boolean p1, p0, Lcom/kwad/components/core/p/a/a;->PL:Z

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/components/core/p/a/a$a;B)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/p/a/a;-><init>(Lcom/kwad/components/core/p/a/a$a;)V

    return-void
.end method

.method public static a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/p/a/a;->PI:Lcom/kwad/components/core/p/b;

    invoke-virtual {p0, p1, p2, p3}, Lcom/kwad/components/core/p/b;->a(ILjava/lang/String;Z)V

    return-void
.end method

.method public static a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;Z)V
    .locals 2

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->isAdResultDataEmpty()Z

    move-result v0

    iget-object p0, p0, Lcom/kwad/components/core/p/a/a;->PI:Lcom/kwad/components/core/p/b;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    invoke-virtual {p0, v0, p1, p2}, Lcom/kwad/components/core/p/b;->a(ILjava/lang/String;Z)V

    return-void

    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/core/p/b;->a(Lcom/kwad/components/core/response/model/AdResultData;Z)V

    return-void
.end method


# virtual methods
.method public final getAdNum()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdNum()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public final getAdStyle()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    iget v0, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final getPosId()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method
