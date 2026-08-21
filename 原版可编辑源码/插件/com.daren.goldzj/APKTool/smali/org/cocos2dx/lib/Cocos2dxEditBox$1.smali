.class Lorg/cocos2dx/lib/Cocos2dxEditBox$1;
.super Ljava/lang/Object;
.source "Cocos2dxEditBox.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxEditBox;->addButton(Landroid/widget/RelativeLayout;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxEditBox;)V
    .locals 0

    .line 335
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 338
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$802(Lorg/cocos2dx/lib/Cocos2dxEditBox;Z)Z

    .line 339
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-static {p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$200(Lorg/cocos2dx/lib/Cocos2dxEditBox;)Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$900(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)V

    .line 341
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-static {p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$1000(Lorg/cocos2dx/lib/Cocos2dxEditBox;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 342
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-static {p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$500(Lorg/cocos2dx/lib/Cocos2dxEditBox;)V

    :cond_0
    return-void
.end method
