.class final Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)V
    .locals 0

    .line 458
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    .line 461
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/webkit/WebView;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 462
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/webkit/WebView;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    const-string v1, "onPlayerCloseBtnClicked"

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
