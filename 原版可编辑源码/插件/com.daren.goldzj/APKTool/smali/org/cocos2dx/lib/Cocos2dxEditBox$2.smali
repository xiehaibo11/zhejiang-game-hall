.class Lorg/cocos2dx/lib/Cocos2dxEditBox$2;
.super Ljava/lang/Object;
.source "Cocos2dxEditBox.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxEditBox;->showNative(Ljava/lang/String;IZZLjava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$confirmHold:Z

.field final synthetic val$confirmType:Ljava/lang/String;

.field final synthetic val$defaultValue:Ljava/lang/String;

.field final synthetic val$inputType:Ljava/lang/String;

.field final synthetic val$isMultiline:Z

.field final synthetic val$maxLength:I


# direct methods
.method constructor <init>(Ljava/lang/String;IZZLjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 421
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$defaultValue:Ljava/lang/String;

    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$maxLength:I

    iput-boolean p3, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$isMultiline:Z

    iput-boolean p4, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$confirmHold:Z

    iput-object p5, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$confirmType:Ljava/lang/String;

    iput-object p6, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$inputType:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 424
    new-instance v0, Landroid/content/Intent;

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const-class v2, Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 425
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$defaultValue:Ljava/lang/String;

    const-string v2, "defaultValue"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 426
    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$maxLength:I

    const-string v2, "maxLength"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 427
    iget-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$isMultiline:Z

    const-string v2, "isMultiline"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 428
    iget-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$confirmHold:Z

    const-string v2, "confirmHold"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 429
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$confirmType:Ljava/lang/String;

    const-string v2, "confirmType"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 430
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;->val$inputType:Ljava/lang/String;

    const-string v2, "inputType"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 431
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const/16 v2, 0x2711

    invoke-virtual {v1, v0, v2}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V

    return-void
.end method
