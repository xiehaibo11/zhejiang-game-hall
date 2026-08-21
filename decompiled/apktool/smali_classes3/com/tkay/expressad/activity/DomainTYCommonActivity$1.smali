.class final Lcom/tkay/expressad/activity/DomainTYCommonActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/webview/BrowserView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/activity/DomainTYCommonActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/activity/DomainTYCommonActivity;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/activity/DomainTYCommonActivity;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/tkay/expressad/activity/DomainTYCommonActivity$1;->a:Lcom/tkay/expressad/activity/DomainTYCommonActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/tkay/expressad/activity/DomainTYCommonActivity$1;->a:Lcom/tkay/expressad/activity/DomainTYCommonActivity;

    invoke-virtual {v0}, Lcom/tkay/expressad/activity/DomainTYCommonActivity;->finish()V

    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 2

    .line 87
    invoke-static {p2}, Lcom/tkay/expressad/foundation/h/s$a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/activity/DomainTYCommonActivity$1;->a:Lcom/tkay/expressad/activity/DomainTYCommonActivity;

    const/4 v1, 0x0

    invoke-static {v0, p2, v1}, Lcom/tkay/expressad/foundation/h/s$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 88
    iget-object v0, p0, Lcom/tkay/expressad/activity/DomainTYCommonActivity$1;->a:Lcom/tkay/expressad/activity/DomainTYCommonActivity;

    invoke-virtual {v0}, Lcom/tkay/expressad/activity/DomainTYCommonActivity;->finish()V

    .line 91
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/activity/DomainTYCommonActivity$1;->a:Lcom/tkay/expressad/activity/DomainTYCommonActivity;

    invoke-static {v0, p1, p2}, Lcom/tkay/expressad/activity/DomainTYCommonActivity;->a(Lcom/tkay/expressad/activity/DomainTYCommonActivity;Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public final b()V
    .locals 0

    return-void
.end method
