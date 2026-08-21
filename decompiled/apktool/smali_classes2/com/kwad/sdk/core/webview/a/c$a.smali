.class public final Lcom/kwad/sdk/core/webview/a/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/webview/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

.field private asH:Lcom/kwad/sdk/core/report/z$b;

.field private ays:Z

.field private ayt:Lcom/kwad/sdk/core/webview/KsAdWebView$d;

.field private ayu:Lcom/kwad/sdk/core/webview/KsAdWebView$b;

.field private ayv:Z

.field private ayw:Z

.field private ayx:Z

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private final mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayv:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayw:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ays:Z

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final Ea()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayw:Z

    return v0
.end method

.method public final Eb()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ays:Z

    return v0
.end method

.method public final Ec()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayv:Z

    return v0
.end method

.method public final Ed()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayx:Z

    return v0
.end method

.method public final a(Lcom/kwad/sdk/core/webview/KsAdWebView$b;)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayu:Lcom/kwad/sdk/core/webview/KsAdWebView$b;

    return-object p0
.end method

.method public final b(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->asH:Lcom/kwad/sdk/core/report/z$b;

    return-object p0
.end method

.method public final b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayt:Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    return-object p0
.end method

.method public final bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayw:Z

    return-object p0
.end method

.method public final bl(Z)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayv:Z

    return-object p0
.end method

.method public final bm(Z)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayx:Z

    return-object p0
.end method

.method public final c(Lcom/kwad/sdk/core/webview/KsAdWebView$c;)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    return-object p0
.end method

.method public final cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/a/c$a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final getClientParams()Lcom/kwad/sdk/core/report/z$b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->asH:Lcom/kwad/sdk/core/report/z$b;

    return-object v0
.end method

.method public final getContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->mContext:Landroid/content/Context;

    return-object v0
.end method

.method public final getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayt:Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    return-object v0
.end method

.method public final lT()Lcom/kwad/sdk/core/webview/KsAdWebView$b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->ayu:Lcom/kwad/sdk/core/webview/KsAdWebView$b;

    return-object v0
.end method

.method public final oR()Lcom/kwad/sdk/core/webview/KsAdWebView$c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/a/c$a;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    return-object v0
.end method
