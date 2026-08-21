.class Lcom/ss/android/downloadlib/addownload/compliance/rg$5;
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

    .line 121
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$5;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 124
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$5;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->dismiss()V

    .line 125
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$5;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rg(Lcom/ss/android/downloadlib/addownload/compliance/rg;)J

    move-result-wide v0

    const-string p1, "lp_app_dialog_click_giveup"

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(Ljava/lang/String;J)V

    return-void
.end method
