.class public final Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/page/AdWebViewActivityProxy;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;
    }
.end annotation


# instance fields
.field private MB:Ljava/lang/String;

.field private MC:Ljava/lang/String;

.field private MD:Z

.field private ME:Z

.field private adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;ZZ)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MB:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MC:Ljava/lang/String;

    iput-object p3, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-boolean p4, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MD:Z

    iput-boolean p5, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->ME:Z

    return-void
.end method

.method synthetic constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;ZZB)V
    .locals 0

    invoke-direct/range {p0 .. p5}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;ZZ)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MC:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MB:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->ME:Z

    return p0
.end method

.method static synthetic e(Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MD:Z

    return p0
.end method


# virtual methods
.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final ow()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MB:Ljava/lang/String;

    return-object v0
.end method

.method public final ox()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MC:Ljava/lang/String;

    return-object v0
.end method

.method public final oy()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->MD:Z

    return v0
.end method

.method public final oz()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->ME:Z

    return v0
.end method
