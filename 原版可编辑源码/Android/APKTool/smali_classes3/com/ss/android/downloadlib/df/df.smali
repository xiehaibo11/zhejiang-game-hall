.class public Lcom/ss/android/downloadlib/df/df;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/df/fw;I)V
    .locals 2

    .line 20
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/df/df$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/downloadlib/df/df$1;-><init>(Lcom/ss/android/downloadlib/df/df;Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/df/fw;)V

    int-to-long p1, p3

    invoke-virtual {v0, v1, p1, p2}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;J)V

    return-void
.end method
