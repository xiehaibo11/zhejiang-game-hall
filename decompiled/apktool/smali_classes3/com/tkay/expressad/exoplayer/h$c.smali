.class public final Lcom/tkay/expressad/exoplayer/h$c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "c"
.end annotation

.annotation runtime Ljava/lang/Deprecated;
.end annotation


# instance fields
.field public final a:Lcom/tkay/expressad/exoplayer/x$b;

.field public final b:I

.field public final c:Ljava/lang/Object;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/x$b;ILjava/lang/Object;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 138
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 139
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h$c;->a:Lcom/tkay/expressad/exoplayer/x$b;

    .line 140
    iput p2, p0, Lcom/tkay/expressad/exoplayer/h$c;->b:I

    .line 141
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h$c;->c:Ljava/lang/Object;

    return-void
.end method
