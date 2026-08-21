.class public Lorg/cocos2dx/lib/Cocos2dxSound$OnLoadCompletedListener;
.super Ljava/lang/Object;
.source "Cocos2dxSound.java"

# interfaces
.implements Landroid/media/SoundPool$OnLoadCompleteListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/cocos2dx/lib/Cocos2dxSound;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "OnLoadCompletedListener"
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxSound;


# direct methods
.method public constructor <init>(Lorg/cocos2dx/lib/Cocos2dxSound;)V
    .locals 0

    .line 444
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound$OnLoadCompletedListener;->this$0:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLoadComplete(Landroid/media/SoundPool;II)V
    .locals 7

    if-nez p3, :cond_0

    .line 451
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound$OnLoadCompletedListener;->this$0:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-static {p1}, Lorg/cocos2dx/lib/Cocos2dxSound;->access$000(Lorg/cocos2dx/lib/Cocos2dxSound;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p1

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;

    if-eqz p1, :cond_0

    .line 454
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound$OnLoadCompletedListener;->this$0:Lorg/cocos2dx/lib/Cocos2dxSound;

    iget-object v1, p1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->path:Ljava/lang/String;

    iget-boolean v3, p1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->isLoop:Z

    iget v4, p1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->pitch:F

    iget v5, p1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->pan:F

    iget v6, p1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->gain:F

    move v2, p2

    invoke-static/range {v0 .. v6}, Lorg/cocos2dx/lib/Cocos2dxSound;->access$100(Lorg/cocos2dx/lib/Cocos2dxSound;Ljava/lang/String;IZFFF)I

    move-result p2

    iput p2, p1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->effectID:I

    .line 455
    monitor-enter p1

    .line 456
    :try_start_0
    invoke-virtual {p1}, Ljava/lang/Object;->notifyAll()V

    .line 457
    monitor-exit p1

    goto :goto_0

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p2

    :cond_0
    :goto_0
    return-void
.end method
