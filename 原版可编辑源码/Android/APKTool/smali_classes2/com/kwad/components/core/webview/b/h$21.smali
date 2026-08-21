.class final Lcom/kwad/components/core/webview/b/h$21;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/b/a/s$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$21;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/s;)V
    .locals 3

    iget-object v0, p1, Lcom/kwad/components/core/webview/b/b/s;->message:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$21;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/b/s;->message:Ljava/lang/String;

    const-wide/16 v1, 0x0

    invoke-static {v0, p1, v1, v2}, Lcom/kwad/sdk/utils/v;->d(Landroid/content/Context;Ljava/lang/String;J)V

    :cond_0
    return-void
.end method
