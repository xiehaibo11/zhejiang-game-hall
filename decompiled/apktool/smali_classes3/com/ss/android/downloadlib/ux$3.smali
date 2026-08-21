.class Lcom/ss/android/downloadlib/ux$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/ux;->rg(Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Z

.field final synthetic q:Lcom/ss/android/downloadlib/ux;

.field final synthetic rg:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/ux;Ljava/lang/String;Z)V
    .locals 0

    .line 372
    iput-object p1, p0, Lcom/ss/android/downloadlib/ux$3;->q:Lcom/ss/android/downloadlib/ux;

    iput-object p2, p0, Lcom/ss/android/downloadlib/ux$3;->rg:Ljava/lang/String;

    iput-boolean p3, p0, Lcom/ss/android/downloadlib/ux$3;->df:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 375
    iget-object v0, p0, Lcom/ss/android/downloadlib/ux$3;->q:Lcom/ss/android/downloadlib/ux;

    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->df(Lcom/ss/android/downloadlib/ux;)Lcom/ss/android/downloadlib/fw;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/ux$3;->rg:Ljava/lang/String;

    iget-boolean v2, p0, Lcom/ss/android/downloadlib/ux$3;->df:Z

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadlib/fw;->rg(Ljava/lang/String;Z)V

    return-void
.end method
