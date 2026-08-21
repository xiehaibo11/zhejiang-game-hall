.class public final Lcom/kwad/components/core/webview/b/d/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b/d/a$a;
    }
.end annotation


# instance fields
.field private final XA:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private Xz:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/d/a;->Xz:Ljava/util/List;

    const/4 v0, 0x6

    new-array v0, v0, [Ljava/lang/Integer;

    const/16 v1, 0x7b

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const/16 v1, 0xb8

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const/16 v1, 0xb9

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x2

    aput-object v1, v0, v2

    const/16 v1, 0xbe

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x3

    aput-object v1, v0, v2

    const/16 v1, 0xc7

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x4

    aput-object v1, v0, v2

    const/16 v1, 0xc8

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x5

    aput-object v1, v0, v2

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/d/a;->XA:Ljava/util/List;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/d/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/d/a;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/d/a;->aQ(I)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/d/a;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/d/a;->aP(Ljava/lang/String;)V

    return-void
.end method

.method private aP(Ljava/lang/String;)V
    .locals 2

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "elementType"

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const p1, 0x7fffffff

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/d/a;->XA:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/d/a;->Xz:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private aQ(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/d/a;->XA:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/d/a;->Xz:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static sb()Lcom/kwad/components/core/webview/b/d/a;
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/a$a;->se()Lcom/kwad/components/core/webview/b/d/a;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final aQ(Ljava/lang/String;)V
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/core/webview/b/d/a$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/webview/b/d/a$2;-><init>(Lcom/kwad/components/core/webview/b/d/a;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final aR(I)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b/d/a$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/webview/b/d/a$1;-><init>(Lcom/kwad/components/core/webview/b/d/a;I)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final sc()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/d/a;->Xz:Ljava/util/List;

    return-object v0
.end method

.method public final sd()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/d/a;->Xz:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    return-void
.end method
