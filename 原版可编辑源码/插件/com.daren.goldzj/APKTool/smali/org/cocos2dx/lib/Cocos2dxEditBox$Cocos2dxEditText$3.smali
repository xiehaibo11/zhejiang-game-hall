.class Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;
.super Ljava/lang/Object;
.source "Cocos2dxEditBox.java"

# interfaces
.implements Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->registKeyboardVisible()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)V
    .locals 0

    .line 232
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onGlobalLayout()V
    .locals 3

    .line 235
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 236
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getWindowVisibleDisplayFrame(Landroid/graphics/Rect;)V

    .line 237
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getRootView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getHeight()I

    move-result v1

    iget v2, v0, Landroid/graphics/Rect;->bottom:I

    iget v0, v0, Landroid/graphics/Rect;->top:I

    sub-int/2addr v2, v0

    sub-int/2addr v1, v2

    .line 239
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->access$600(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)I

    move-result v0

    div-int/lit8 v0, v0, 0x4

    if-le v1, v0, :cond_0

    .line 240
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->access$700(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 241
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->access$702(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;Z)Z

    goto :goto_0

    .line 244
    :cond_0
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->access$700(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 245
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->access$702(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;Z)Z

    .line 246
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    iget-object v0, v0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$500(Lorg/cocos2dx/lib/Cocos2dxEditBox;)V

    :cond_1
    :goto_0
    return-void
.end method
