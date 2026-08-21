.class Lcom/ss/android/downloadlib/rg$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/rg;->rg(JI)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/rg;

.field final synthetic rg:J


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/rg;J)V
    .locals 0

    .line 443
    iput-object p1, p0, Lcom/ss/android/downloadlib/rg$2;->df:Lcom/ss/android/downloadlib/rg;

    iput-wide p2, p0, Lcom/ss/android/downloadlib/rg$2;->rg:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 446
    invoke-static {}, Lcom/ss/android/downloadlib/rg;->rg()Lcom/ss/android/downloadlib/rg;

    move-result-object v0

    iget-wide v1, p0, Lcom/ss/android/downloadlib/rg$2;->rg:J

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadlib/rg;->rg(J)V

    return-void
.end method
