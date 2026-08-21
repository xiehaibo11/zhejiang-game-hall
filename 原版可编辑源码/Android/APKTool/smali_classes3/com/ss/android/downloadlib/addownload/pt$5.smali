.class Lcom/ss/android/downloadlib/addownload/pt$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pt;->rg(ILjava/lang/String;JLcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/addownload/pp$rg;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/pt;

.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/pp$rg;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pt;Lcom/ss/android/downloadlib/addownload/pp$rg;)V
    .locals 0

    .line 228
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pt$5;->df:Lcom/ss/android/downloadlib/addownload/pt;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/pt$5;->rg:Lcom/ss/android/downloadlib/addownload/pp$rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 231
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt$5;->rg:Lcom/ss/android/downloadlib/addownload/pp$rg;

    invoke-interface {v0}, Lcom/ss/android/downloadlib/addownload/pp$rg;->rg()V

    return-void
.end method
