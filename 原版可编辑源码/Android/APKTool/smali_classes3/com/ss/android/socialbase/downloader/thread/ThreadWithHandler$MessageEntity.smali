.class Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$MessageEntity;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MessageEntity"
.end annotation


# instance fields
.field public delayMillis:J

.field public target:Ljava/lang/Runnable;

.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;


# direct methods
.method public constructor <init>(Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;Ljava/lang/Runnable;J)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$MessageEntity;->this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 74
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$MessageEntity;->target:Ljava/lang/Runnable;

    .line 75
    iput-wide p3, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$MessageEntity;->delayMillis:J

    return-void
.end method
