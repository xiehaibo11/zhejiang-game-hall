.class final Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;)V
    .locals 0

    .line 140
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$1;->a:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    .line 143
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$1;->a:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x68

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method
