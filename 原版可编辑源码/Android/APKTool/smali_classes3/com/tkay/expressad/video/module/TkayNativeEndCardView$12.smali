.class final Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;Ljava/lang/String;)V
    .locals 0

    .line 377
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;->b:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 380
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;->b:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;->a:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method
