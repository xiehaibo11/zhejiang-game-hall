.class Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$1;
.super Ljava/lang/Object;
.source "ViewWebGroup.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setupView(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;


# direct methods
.method constructor <init>(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 75
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->access$000(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)Lcom/bianfeng/customwidgetlib/SuspendIconView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->getTag()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    const-string v0, "\u5168\u5c4f"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 76
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->access$100(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;

    move-result-object p1

    sget-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->QUANPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    invoke-interface {p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;->showQuanping(Lcom/bianfeng/splitscreenwindow/ShowType;)V

    goto :goto_0

    .line 78
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->access$100(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;

    move-result-object p1

    sget-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->FENPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    invoke-interface {p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;->showFenping(Lcom/bianfeng/splitscreenwindow/ShowType;)V

    :goto_0
    return-void
.end method
