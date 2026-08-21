.class public final Lcom/loc/u;
.super Ljava/lang/Object;
.source "PrivacyError.java"


# instance fields
.field public final a:Lcom/loc/t$c;

.field public final b:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/loc/t$c;Lcom/loc/w;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/loc/u;->a:Lcom/loc/t$c;

    sget-object v0, Lcom/loc/u$1;->a:[I

    invoke-virtual {p1}, Lcom/loc/t$c;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x1

    const/4 v1, 0x0

    packed-switch p1, :pswitch_data_0

    const-string p1, ""

    goto/16 :goto_0

    :pswitch_0
    new-array p1, v1, [Ljava/lang/Object;

    const-string p2, "\u8bbe\u7f6e\u9690\u79c1\u653f\u7b56\u6210\u529f"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto/16 :goto_0

    :pswitch_1
    new-array p1, v1, [Ljava/lang/Object;

    const-string p2, "***\u786e\u4fdd\u8c03\u7528SDK\u4efb\u4f55\u63a5\u53e3\u524d\u5148\u8c03\u7528\u66f4\u65b0\u9690\u79c1\u5408\u89c4updatePrivacyShow\u3001updatePrivacyAgree\u4e24\u4e2a\u63a5\u53e3\u5e76\u4e14\u53c2\u6570\u503c\u90fd\u4e3atrue\uff0c\u82e5\u672a\u6b63\u786e\u8bbe\u7f6e\u6709\u5d29\u6e83\u98ce\u9669***\n\u53c2\u6570\u975e\u6cd5\uff0ccontext \u6216 sdkInfo\u4e3a\u7a7a"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :pswitch_2
    new-array p1, v0, [Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "***\u786e\u4fdd\u8c03\u7528SDK\u4efb\u4f55\u63a5\u53e3\u524d\u5148\u8c03\u7528\u66f4\u65b0\u9690\u79c1\u5408\u89c4updatePrivacyShow\u3001updatePrivacyAgree\u4e24\u4e2a\u63a5\u53e3\u5e76\u4e14\u53c2\u6570\u503c\u90fd\u4e3atrue\uff0c\u82e5\u672a\u6b63\u786e\u8bbe\u7f6e\u6709\u5d29\u6e83\u98ce\u9669***\n\u4f7f\u7528%s SDK \u529f\u80fd\u4f7f\u7528\u524d\u8bf7\u786e\u4fdd\u5df2\u7ecf\u6b63\u786e\u8bbe\u7f6eapiKey\uff0c\u5982\u6709\u7591\u95ee\u8bf7\u5728\u9ad8\u5fb7\u5f00\u653e\u5e73\u53f0\u5b98\u7f51\u4e2d\u641c\u7d22\u3010INVALID_USER_KEY\u3011\u76f8\u5173\u5185\u5bb9\u8fdb\u884c\u89e3\u51b3\u3002"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :pswitch_3
    new-array p1, v0, [Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "***\u786e\u4fdd\u8c03\u7528SDK\u4efb\u4f55\u63a5\u53e3\u524d\u5148\u8c03\u7528\u66f4\u65b0\u9690\u79c1\u5408\u89c4updatePrivacyShow\u3001updatePrivacyAgree\u4e24\u4e2a\u63a5\u53e3\u5e76\u4e14\u53c2\u6570\u503c\u90fd\u4e3atrue\uff0c\u82e5\u672a\u6b63\u786e\u8bbe\u7f6e\u6709\u5d29\u6e83\u98ce\u9669***\n\u4f7f\u7528%s SDK \u529f\u80fd\u524d\u8bf7\u786e\u4fdd\u9690\u79c1\u6743\u653f\u7b56\u5df2\u53d6\u5f97\u7528\u6237\u540c\u610f"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :pswitch_4
    new-array p1, v0, [Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "***\u786e\u4fdd\u8c03\u7528SDK\u4efb\u4f55\u63a5\u53e3\u524d\u5148\u8c03\u7528\u66f4\u65b0\u9690\u79c1\u5408\u89c4updatePrivacyShow\u3001updatePrivacyAgree\u4e24\u4e2a\u63a5\u53e3\u5e76\u4e14\u53c2\u6570\u503c\u90fd\u4e3atrue\uff0c\u82e5\u672a\u6b63\u786e\u8bbe\u7f6e\u6709\u5d29\u6e83\u98ce\u9669***\n\u4f7f\u7528%s SDK \u529f\u80fd\u524d\u8bf7\u786e\u4fdd\u8bbe\u7f6e\u9690\u79c1\u6743\u653f\u7b56\u662f\u5426\u53d6\u5f97\u7528\u6237\u540c\u610f"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :pswitch_5
    new-array p1, v0, [Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "***\u786e\u4fdd\u8c03\u7528SDK\u4efb\u4f55\u63a5\u53e3\u524d\u5148\u8c03\u7528\u66f4\u65b0\u9690\u79c1\u5408\u89c4updatePrivacyShow\u3001updatePrivacyAgree\u4e24\u4e2a\u63a5\u53e3\u5e76\u4e14\u53c2\u6570\u503c\u90fd\u4e3atrue\uff0c\u82e5\u672a\u6b63\u786e\u8bbe\u7f6e\u6709\u5d29\u6e83\u98ce\u9669***\n\u4f7f\u7528%s SDK \u529f\u80fd\u524d\u8bf7\u786e\u4fdd\u9690\u79c1\u6743\u653f\u7b56\u5df2\u7ecf\u5305\u542b\u9ad8\u5fb7\u5f00\u5e73\u9690\u79c1\u6743\u653f\u7b56"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :pswitch_6
    new-array p1, v0, [Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "***\u786e\u4fdd\u8c03\u7528SDK\u4efb\u4f55\u63a5\u53e3\u524d\u5148\u8c03\u7528\u66f4\u65b0\u9690\u79c1\u5408\u89c4updatePrivacyShow\u3001updatePrivacyAgree\u4e24\u4e2a\u63a5\u53e3\u5e76\u4e14\u53c2\u6570\u503c\u90fd\u4e3atrue\uff0c\u82e5\u672a\u6b63\u786e\u8bbe\u7f6e\u6709\u5d29\u6e83\u98ce\u9669***\n\u4f7f\u7528%s SDK \u529f\u80fd\u524d\u8bf7\u786e\u4fdd\u8bbe\u7f6e\u9690\u79c1\u6743\u653f\u7b56\u662f\u5426\u5305\u542b\u9ad8\u5fb7\u5f00\u5e73\u9690\u79c1\u6743\u653f\u7b56"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :pswitch_7
    new-array p1, v0, [Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "***\u786e\u4fdd\u8c03\u7528SDK\u4efb\u4f55\u63a5\u53e3\u524d\u5148\u8c03\u7528\u66f4\u65b0\u9690\u79c1\u5408\u89c4updatePrivacyShow\u3001updatePrivacyAgree\u4e24\u4e2a\u63a5\u53e3\u5e76\u4e14\u53c2\u6570\u503c\u90fd\u4e3atrue\uff0c\u82e5\u672a\u6b63\u786e\u8bbe\u7f6e\u6709\u5d29\u6e83\u98ce\u9669***\n\u4f7f\u7528%s SDK \u529f\u80fd\u524d\u8bf7\u786e\u4fdd\u9690\u79c1\u6743\u653f\u7b56\u5df2\u5f39\u7a97\u544a\u77e5\u7528\u6237"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :pswitch_8
    new-array p1, v0, [Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "***\u786e\u4fdd\u8c03\u7528SDK\u4efb\u4f55\u63a5\u53e3\u524d\u5148\u8c03\u7528\u66f4\u65b0\u9690\u79c1\u5408\u89c4updatePrivacyShow\u3001updatePrivacyAgree\u4e24\u4e2a\u63a5\u53e3\u5e76\u4e14\u53c2\u6570\u503c\u90fd\u4e3atrue\uff0c\u82e5\u672a\u6b63\u786e\u8bbe\u7f6e\u6709\u5d29\u6e83\u98ce\u9669***\n\u4f7f\u7528%s SDK \u529f\u80fd\u524d\u8bf7\u8bbe\u7f6e\u9690\u79c1\u6743\u653f\u7b56\u662f\u5426\u5f39\u7a97\u544a\u77e5\u7528\u6237"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    iput-object p1, p0, Lcom/loc/u;->b:Ljava/lang/String;

    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
