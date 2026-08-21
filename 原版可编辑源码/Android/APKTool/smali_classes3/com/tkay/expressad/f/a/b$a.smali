.class final Lcom/tkay/expressad/f/a/b$a;
.super Landroid/os/CountDownTimer;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/f/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/f/a/a;


# direct methods
.method public constructor <init>(JJ)V
    .locals 0

    .line 94
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method final a(Lcom/tkay/expressad/f/a/a;)V
    .locals 0

    .line 112
    iput-object p1, p0, Lcom/tkay/expressad/f/a/b$a;->a:Lcom/tkay/expressad/f/a/a;

    return-void
.end method

.method public final onFinish()V
    .locals 0

    return-void
.end method

.method public final onTick(J)V
    .locals 0

    return-void
.end method
