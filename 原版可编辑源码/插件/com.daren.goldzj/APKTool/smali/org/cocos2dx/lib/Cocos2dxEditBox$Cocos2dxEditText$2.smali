.class Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$2;
.super Ljava/lang/Object;
.source "Cocos2dxEditBox.java"

# interfaces
.implements Landroid/widget/TextView$OnEditorActionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->addListeners()V
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

    .line 211
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$2;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onEditorAction(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z
    .locals 0

    .line 214
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$2;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-static {p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->access$400(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 215
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$2;->this$1:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    iget-object p1, p1, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-static {p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$500(Lorg/cocos2dx/lib/Cocos2dxEditBox;)V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
