.class public Lcom/bytedance/android/live/base/api/IEventListener$Event;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/android/live/base/api/IEventListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Event"
.end annotation


# static fields
.field public static final TYPE_COMMENT:I = 0x4

.field public static final TYPE_ENTER:I = 0x1

.field public static final TYPE_EXIT:I = 0x2

.field public static final TYPE_FOLLOW:I = 0x3

.field public static final TYPE_ORDER:I = 0x5

.field public static final TYPE_UNKNOWN:I


# instance fields
.field public time:J

.field public type:I


# direct methods
.method public constructor <init>(IJ)V
    .locals 2

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 19
    iput v0, p0, Lcom/bytedance/android/live/base/api/IEventListener$Event;->type:I

    const-wide/16 v0, 0x0

    .line 21
    iput-wide v0, p0, Lcom/bytedance/android/live/base/api/IEventListener$Event;->time:J

    .line 23
    iput p1, p0, Lcom/bytedance/android/live/base/api/IEventListener$Event;->type:I

    .line 24
    iput-wide p2, p0, Lcom/bytedance/android/live/base/api/IEventListener$Event;->time:J

    return-void
.end method
