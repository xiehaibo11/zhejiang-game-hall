.class Lorg/cocos2dx/javascript/AppActivity$1;
.super Ljava/lang/Object;
.source "AppActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/javascript/AppActivity;->onActivityResult(IILandroid/content/Intent;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/javascript/AppActivity;

.field final synthetic val$isConfirm:Z

.field final synthetic val$text:Ljava/lang/String;


# direct methods
.method constructor <init>(Lorg/cocos2dx/javascript/AppActivity;Ljava/lang/String;Z)V
    .locals 0

    .line 452
    iput-object p1, p0, Lorg/cocos2dx/javascript/AppActivity$1;->this$0:Lorg/cocos2dx/javascript/AppActivity;

    iput-object p2, p0, Lorg/cocos2dx/javascript/AppActivity$1;->val$text:Ljava/lang/String;

    iput-boolean p3, p0, Lorg/cocos2dx/javascript/AppActivity$1;->val$isConfirm:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 455
    iget-object v0, p0, Lorg/cocos2dx/javascript/AppActivity$1;->val$text:Ljava/lang/String;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardInputCallback(Ljava/lang/String;)V

    .line 456
    iget-boolean v0, p0, Lorg/cocos2dx/javascript/AppActivity$1;->val$isConfirm:Z

    if-eqz v0, :cond_0

    .line 457
    iget-object v0, p0, Lorg/cocos2dx/javascript/AppActivity$1;->val$text:Ljava/lang/String;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardConfirmCallback(Ljava/lang/String;)V

    .line 459
    :cond_0
    iget-object v0, p0, Lorg/cocos2dx/javascript/AppActivity$1;->val$text:Ljava/lang/String;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardCompleteCallback(Ljava/lang/String;)V

    return-void
.end method
