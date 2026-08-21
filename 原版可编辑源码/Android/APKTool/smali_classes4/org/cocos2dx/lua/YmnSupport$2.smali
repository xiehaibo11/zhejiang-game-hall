.class Lorg/cocos2dx/lua/YmnSupport$2;
.super Ljava/lang/Object;
.source "YmnSupport.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lua/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$params:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 312
    iput-object p1, p0, Lorg/cocos2dx/lua/YmnSupport$2;->val$params:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 315
    invoke-static {}, Lorg/cocos2dx/lua/YmnSupport;->access$000()Landroid/app/Activity;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lua/YmnSupport$2;->val$params:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return-void
.end method
