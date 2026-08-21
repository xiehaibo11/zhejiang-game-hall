.class final Lcom/tkay/expressad/video/module/TkayVastEndCardView$2;
.super Lcom/tkay/expressad/widget/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVastEndCardView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayVastEndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVastEndCardView;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView$2;->a:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    invoke-direct {p0}, Lcom/tkay/expressad/widget/a;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a(Landroid/view/View;)V
    .locals 2

    .line 63
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView$2;->a:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView$2;->a:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->d()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x6c

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method
