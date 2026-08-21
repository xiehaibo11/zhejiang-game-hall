.class final Lcom/tkay/expressad/video/bt/module/TkayBTWebView$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->init(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TkayBTWebView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;)V
    .locals 0

    .line 264
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 267
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->close()V

    return-void
.end method
