.class Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;
.super Landroid/os/AsyncTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/utils/IdentifierManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "RefreshAdvertisingInfoAsyncTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/utils/IdentifierManager;


# direct methods
.method private constructor <init>(Lcom/czhj/sdk/common/utils/IdentifierManager;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;->a:Lcom/czhj/sdk/common/utils/IdentifierManager;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/czhj/sdk/common/utils/IdentifierManager;Lcom/czhj/sdk/common/utils/IdentifierManager$1;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;-><init>(Lcom/czhj/sdk/common/utils/IdentifierManager;)V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Void;
    .locals 1

    iget-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;->a:Lcom/czhj/sdk/common/utils/IdentifierManager;

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a(Lcom/czhj/sdk/common/utils/IdentifierManager;)V

    iget-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;->a:Lcom/czhj/sdk/common/utils/IdentifierManager;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a(Lcom/czhj/sdk/common/utils/IdentifierManager;Z)Z

    const/4 p1, 0x0

    return-object p1
.end method
