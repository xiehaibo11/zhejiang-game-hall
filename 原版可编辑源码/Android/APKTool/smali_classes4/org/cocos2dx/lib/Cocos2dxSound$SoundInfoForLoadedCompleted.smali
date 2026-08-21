.class Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;
.super Ljava/lang/Object;
.source "Cocos2dxSound.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/cocos2dx/lib/Cocos2dxSound;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "SoundInfoForLoadedCompleted"
.end annotation


# instance fields
.field effectID:I

.field gain:F

.field isLoop:Z

.field pan:F

.field path:Ljava/lang/String;

.field pitch:F

.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxSound;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxSound;Ljava/lang/String;ZFFF)V
    .locals 0

    .line 434
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->this$0:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 435
    iput-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->path:Ljava/lang/String;

    .line 436
    iput-boolean p3, p0, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->isLoop:Z

    .line 437
    iput p4, p0, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->pitch:F

    .line 438
    iput p5, p0, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->pan:F

    .line 439
    iput p6, p0, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->gain:F

    const/4 p1, -0x1

    .line 440
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->effectID:I

    return-void
.end method
