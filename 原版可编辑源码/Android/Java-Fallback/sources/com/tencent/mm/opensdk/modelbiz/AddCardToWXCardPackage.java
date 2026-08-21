package com.tencent.mm.opensdk.modelbiz;

public class AddCardToWXCardPackage {
    private static final java.lang.String TAG = "MicroMsg.AddCardToWXCardPackage";

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        public java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage.WXCardItem> cardArrary;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r5 = this;
                java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem> r0 = r5.cardArrary
                r1 = 0
                if (r0 == 0) goto L43
                int r0 = r0.size()
                if (r0 == 0) goto L43
                java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem> r0 = r5.cardArrary
                int r0 = r0.size()
                r2 = 40
                if (r0 <= r2) goto L16
                goto L43
            L16:
                java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem> r0 = r5.cardArrary
                java.util.Iterator r0 = r0.iterator()
            L1c:
                boolean r2 = r0.hasNext()
                if (r2 == 0) goto L41
                java.lang.Object r2 = r0.next()
                com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem r2 = (com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage.WXCardItem) r2
                if (r2 == 0) goto L40
                java.lang.String r3 = r2.cardId
                if (r3 == 0) goto L40
                int r3 = r3.length()
                r4 = 1024(0x400, float:1.435E-42)
                if (r3 > r4) goto L40
                java.lang.String r2 = r2.cardExtMsg
                if (r2 == 0) goto L1c
                int r2 = r2.length()
                if (r2 <= r4) goto L1c
            L40:
                return r1
            L41:
                r0 = 1
                return r0
            L43:
                return r1
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 9
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r5) {
                r4 = this;
                super.toBundle(r5)
                org.json.JSONStringer r0 = new org.json.JSONStringer
                r0.<init>()
                r0.object()     // Catch: java.lang.Exception -> L4e
                java.lang.String r1 = "card_list"
                r0.key(r1)     // Catch: java.lang.Exception -> L4e
                r0.array()     // Catch: java.lang.Exception -> L4e
                java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem> r1 = r4.cardArrary     // Catch: java.lang.Exception -> L4e
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L4e
            L19:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L4e
                if (r2 == 0) goto L47
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L4e
                com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem r2 = (com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage.WXCardItem) r2     // Catch: java.lang.Exception -> L4e
                r0.object()     // Catch: java.lang.Exception -> L4e
                java.lang.String r3 = "card_id"
                r0.key(r3)     // Catch: java.lang.Exception -> L4e
                java.lang.String r3 = r2.cardId     // Catch: java.lang.Exception -> L4e
                r0.value(r3)     // Catch: java.lang.Exception -> L4e
                java.lang.String r3 = "card_ext"
                r0.key(r3)     // Catch: java.lang.Exception -> L4e
                java.lang.String r3 = r2.cardExtMsg     // Catch: java.lang.Exception -> L4e
                if (r3 != 0) goto L3e
                java.lang.String r2 = ""
                goto L40
            L3e:
                java.lang.String r2 = r2.cardExtMsg     // Catch: java.lang.Exception -> L4e
            L40:
                r0.value(r2)     // Catch: java.lang.Exception -> L4e
                r0.endObject()     // Catch: java.lang.Exception -> L4e
                goto L19
            L47:
                r0.endArray()     // Catch: java.lang.Exception -> L4e
                r0.endObject()     // Catch: java.lang.Exception -> L4e
                goto L69
            L4e:
                r1 = move-exception
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Req.toBundle exception:"
                r2.append(r3)
                java.lang.String r1 = r1.getMessage()
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                java.lang.String r2 = "MicroMsg.AddCardToWXCardPackage"
                com.tencent.mm.opensdk.utils.Log.e(r2, r1)
            L69:
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "_wxapi_add_card_to_wx_card_list"
                r5.putString(r1, r0)
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        public java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage.WXCardItem> cardArrary;

        public Resp() {
                r0 = this;
                r0.<init>()
                return
        }

        public Resp(android.os.Bundle r1) {
                r0 = this;
                r0.<init>()
                r0.fromBundle(r1)
                return
        }

        @Override
        public boolean checkArgs() {
                r1 = this;
                java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem> r0 = r1.cardArrary
                if (r0 == 0) goto Ld
                int r0 = r0.size()
                if (r0 != 0) goto Lb
                goto Ld
            Lb:
                r0 = 1
                return r0
            Ld:
                r0 = 0
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r5) {
                r4 = this;
                super.fromBundle(r5)
                java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem> r0 = r4.cardArrary
                if (r0 != 0) goto Le
                java.util.LinkedList r0 = new java.util.LinkedList
                r0.<init>()
                r4.cardArrary = r0
            Le:
                java.lang.String r0 = "_wxapi_add_card_to_wx_card_list"
                java.lang.String r5 = r5.getString(r0)
                if (r5 == 0) goto L5d
                int r0 = r5.length()
                if (r0 <= 0) goto L5d
                org.json.JSONTokener r0 = new org.json.JSONTokener     // Catch: java.lang.Exception -> L5d
                r0.<init>(r5)     // Catch: java.lang.Exception -> L5d
                java.lang.Object r5 = r0.nextValue()     // Catch: java.lang.Exception -> L5d
                org.json.JSONObject r5 = (org.json.JSONObject) r5     // Catch: java.lang.Exception -> L5d
                java.lang.String r0 = "card_list"
                org.json.JSONArray r5 = r5.getJSONArray(r0)     // Catch: java.lang.Exception -> L5d
                r0 = 0
            L2e:
                int r1 = r5.length()     // Catch: java.lang.Exception -> L5d
                if (r0 >= r1) goto L5d
                org.json.JSONObject r1 = r5.getJSONObject(r0)     // Catch: java.lang.Exception -> L5d
                com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem r2 = new com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem     // Catch: java.lang.Exception -> L5d
                r2.<init>()     // Catch: java.lang.Exception -> L5d
                java.lang.String r3 = "card_id"
                java.lang.String r3 = r1.optString(r3)     // Catch: java.lang.Exception -> L5d
                r2.cardId = r3     // Catch: java.lang.Exception -> L5d
                java.lang.String r3 = "card_ext"
                java.lang.String r3 = r1.optString(r3)     // Catch: java.lang.Exception -> L5d
                r2.cardExtMsg = r3     // Catch: java.lang.Exception -> L5d
                java.lang.String r3 = "is_succ"
                int r1 = r1.optInt(r3)     // Catch: java.lang.Exception -> L5d
                r2.cardState = r1     // Catch: java.lang.Exception -> L5d
                java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem> r1 = r4.cardArrary     // Catch: java.lang.Exception -> L5d
                r1.add(r2)     // Catch: java.lang.Exception -> L5d
                int r0 = r0 + 1
                goto L2e
            L5d:
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 9
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r5) {
                r4 = this;
                super.toBundle(r5)
                org.json.JSONStringer r0 = new org.json.JSONStringer
                r0.<init>()
                r0.object()     // Catch: java.lang.Exception -> L59
                java.lang.String r1 = "card_list"
                r0.key(r1)     // Catch: java.lang.Exception -> L59
                r0.array()     // Catch: java.lang.Exception -> L59
                java.util.List<com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem> r1 = r4.cardArrary     // Catch: java.lang.Exception -> L59
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L59
            L19:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L59
                if (r2 == 0) goto L52
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L59
                com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage$WXCardItem r2 = (com.tencent.mm.opensdk.modelbiz.AddCardToWXCardPackage.WXCardItem) r2     // Catch: java.lang.Exception -> L59
                r0.object()     // Catch: java.lang.Exception -> L59
                java.lang.String r3 = "card_id"
                r0.key(r3)     // Catch: java.lang.Exception -> L59
                java.lang.String r3 = r2.cardId     // Catch: java.lang.Exception -> L59
                r0.value(r3)     // Catch: java.lang.Exception -> L59
                java.lang.String r3 = "card_ext"
                r0.key(r3)     // Catch: java.lang.Exception -> L59
                java.lang.String r3 = r2.cardExtMsg     // Catch: java.lang.Exception -> L59
                if (r3 != 0) goto L3e
                java.lang.String r3 = ""
                goto L40
            L3e:
                java.lang.String r3 = r2.cardExtMsg     // Catch: java.lang.Exception -> L59
            L40:
                r0.value(r3)     // Catch: java.lang.Exception -> L59
                java.lang.String r3 = "is_succ"
                r0.key(r3)     // Catch: java.lang.Exception -> L59
                int r2 = r2.cardState     // Catch: java.lang.Exception -> L59
                long r2 = (long) r2     // Catch: java.lang.Exception -> L59
                r0.value(r2)     // Catch: java.lang.Exception -> L59
                r0.endObject()     // Catch: java.lang.Exception -> L59
                goto L19
            L52:
                r0.endArray()     // Catch: java.lang.Exception -> L59
                r0.endObject()     // Catch: java.lang.Exception -> L59
                goto L74
            L59:
                r1 = move-exception
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Resp.toBundle exception:"
                r2.append(r3)
                java.lang.String r1 = r1.getMessage()
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                java.lang.String r2 = "MicroMsg.AddCardToWXCardPackage"
                com.tencent.mm.opensdk.utils.Log.e(r2, r1)
            L74:
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "_wxapi_add_card_to_wx_card_list"
                r5.putString(r1, r0)
                return
        }
    }

    public static final class WXCardItem {
        public java.lang.String cardExtMsg;
        public java.lang.String cardId;
        public int cardState;

        public WXCardItem() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public AddCardToWXCardPackage() {
            r0 = this;
            r0.<init>()
            return
    }
}
