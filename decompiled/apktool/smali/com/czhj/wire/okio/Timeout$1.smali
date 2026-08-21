.class Lcom/czhj/wire/okio/Timeout$1;
.super Lcom/czhj/wire/okio/Timeout;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/okio/Timeout;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/okio/Timeout;-><init>()V

    return-void
.end method


# virtual methods
.method public deadlineNanoTime(J)Lcom/czhj/wire/okio/Timeout;
    .locals 0

    return-object p0
.end method

.method public throwIfReached()V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    return-void
.end method

.method public timeout(JLjava/util/concurrent/TimeUnit;)Lcom/czhj/wire/okio/Timeout;
    .locals 0

    return-object p0
.end method
