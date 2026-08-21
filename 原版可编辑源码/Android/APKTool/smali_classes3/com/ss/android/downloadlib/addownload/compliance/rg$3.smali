.class Lcom/ss/android/downloadlib/addownload/compliance/rg$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/compliance/rg;->rg()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/compliance/rg;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$3;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 107
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg()Lcom/ss/android/downloadlib/addownload/compliance/df;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$3;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->q(Lcom/ss/android/downloadlib/addownload/compliance/rg;)Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg(Landroid/app/Activity;)V

    .line 108
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$3;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->q(Lcom/ss/android/downloadlib/addownload/compliance/rg;)Landroid/app/Activity;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$3;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->pt(Lcom/ss/android/downloadlib/addownload/compliance/rg;)J

    move-result-wide v0

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/AppDetailInfoActivity;->rg(Landroid/app/Activity;J)V

    .line 109
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$3;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rg(Lcom/ss/android/downloadlib/addownload/compliance/rg;)J

    move-result-wide v0

    const-string p1, "lp_app_dialog_click_detail"

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(Ljava/lang/String;J)V

    return-void
.end method
