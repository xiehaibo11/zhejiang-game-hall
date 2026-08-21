.class public Lcom/ss/android/downloadlib/utils/df;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/utils/df$df;,
        Lcom/ss/android/downloadlib/utils/df$rg;
    }
.end annotation


# static fields
.field static final rg:Lcom/ss/android/downloadlib/utils/df$rg;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 39
    new-instance v0, Lcom/ss/android/downloadlib/utils/df$df;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/downloadlib/utils/df$df;-><init>(Lcom/ss/android/downloadlib/utils/df$1;)V

    sput-object v0, Lcom/ss/android/downloadlib/utils/df;->rg:Lcom/ss/android/downloadlib/utils/df$rg;

    return-void
.end method

.method public static varargs rg(Landroid/os/AsyncTask;[Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Landroid/os/AsyncTask<",
            "TT;**>;[TT;)V"
        }
    .end annotation

    .line 44
    sget-object v0, Lcom/ss/android/downloadlib/utils/df;->rg:Lcom/ss/android/downloadlib/utils/df$rg;

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/downloadlib/utils/df$rg;->rg(Landroid/os/AsyncTask;[Ljava/lang/Object;)V

    return-void
.end method
