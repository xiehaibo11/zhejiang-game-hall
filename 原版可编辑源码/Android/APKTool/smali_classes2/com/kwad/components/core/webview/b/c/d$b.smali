.class public final Lcom/kwad/components/core/webview/b/c/d$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/b/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field private Xn:Lcom/kwad/sdk/components/g;

.field private Xo:Z

.field private Xw:Z

.field private Xy:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private templateId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/core/webview/b/c/d$b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xo:Z

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/core/webview/b/c/d$b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xw:Z

    return p0
.end method

.method static synthetic e(Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xy:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/sdk/components/g;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xn:Lcom/kwad/sdk/components/g;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xy:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    return-void
.end method

.method public final aO(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d$b;->templateId:Ljava/lang/String;

    return-void
.end method

.method public final aP(Z)V
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xo:Z

    return-void
.end method

.method public final aQ(Z)V
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xw:Z

    return-void
.end method

.method public final c(Lcom/kwad/sdk/components/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xn:Lcom/kwad/sdk/components/g;

    return-void
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d$b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final getTemplateId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d$b;->templateId:Ljava/lang/String;

    return-object v0
.end method

.method public final rZ()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xo:Z

    return v0
.end method

.method public final sa()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/c/d$b;->Xw:Z

    return v0
.end method

.method public final setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d$b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method
