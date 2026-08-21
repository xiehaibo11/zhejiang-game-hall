.class Lcom/ss/android/downloadlib/addownload/pt$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/pp$df;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pt;->rg(IJJLcom/ss/android/downloadlib/addownload/pp$rg;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic c:Lcom/ss/android/downloadlib/addownload/pt;

.field final synthetic df:Ljava/lang/String;

.field final synthetic pp:Lcom/ss/android/downloadlib/addownload/pp$rg;

.field final synthetic pt:J

.field final synthetic q:Lcom/ss/android/downloadad/api/rg/df;

.field final synthetic rg:I


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pt;ILjava/lang/String;Lcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/addownload/pp$rg;)V
    .locals 0

    .line 96
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->c:Lcom/ss/android/downloadlib/addownload/pt;

    iput p2, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->rg:I

    iput-object p3, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->df:Ljava/lang/String;

    iput-object p4, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->q:Lcom/ss/android/downloadad/api/rg/df;

    iput-wide p5, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->pt:J

    iput-object p7, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->pp:Lcom/ss/android/downloadlib/addownload/pp$rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(J)V
    .locals 9

    .line 99
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->c:Lcom/ss/android/downloadlib/addownload/pt;

    iget v1, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->rg:I

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->df:Ljava/lang/String;

    iget-object v5, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->q:Lcom/ss/android/downloadad/api/rg/df;

    iget-wide v6, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->pt:J

    iget-object v8, p0, Lcom/ss/android/downloadlib/addownload/pt$1;->pp:Lcom/ss/android/downloadlib/addownload/pp$rg;

    move-wide v3, p1

    invoke-static/range {v0 .. v8}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadlib/addownload/pt;ILjava/lang/String;JLcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/addownload/pp$rg;)V

    return-void
.end method
